'use strict';

const donutsSection = document.querySelector('.display--donuts');
const donutsBtn = document.querySelector('.donut--scroll');
const prodSection = document.querySelector('.box--section');
const prodBtn = document.querySelector('.prod--scroll');

// console.log(boxSection);
// console.log(boxSection);

donutsBtn.addEventListener('click', (e) => {
  e.preventDefault();
  donutsSection.scrollIntoView({ behavior: 'smooth' });
  // const sectionCoords = donutsSection.getBoundingClientRect();
  // window.scrollTo({
  //   left: sectionCoords.left + window.pageXOffset,
  //   top: sectionCoords.top + window.pageYOffset,
  //   behavior: 'smooth',
  // });
});

prodBtn.addEventListener('click', (e) => {
  e.preventDefault();
  prodSection.scrollIntoView({ behavior: 'smooth' });
  // const sectionCoords = donutsSection.getBoundingClientRect();
  // window.scrollTo({
  //   left: sectionCoords.left + window.pageXOffset,
  //   top: sectionCoords.top + window.pageYOffset,
  //   behavior: 'smooth',
  // });
});
