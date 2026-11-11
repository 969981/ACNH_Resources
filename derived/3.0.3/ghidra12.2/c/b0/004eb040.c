
void _INIT_380(void)

{
  if ((DAT_04c72048 & 1) == 0) {
    DAT_04c72038 = 0;
    DAT_04c72040 = 0;
    DAT_04c72048 = 1;
  }
  return;
}

