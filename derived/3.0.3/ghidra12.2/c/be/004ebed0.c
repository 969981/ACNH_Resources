
void _INIT_386(void)

{
  if ((DAT_04c72138 & 1) == 0) {
    DAT_04c72128 = 0;
    DAT_04c72130 = 0;
    DAT_04c72138 = 1;
  }
  return;
}

