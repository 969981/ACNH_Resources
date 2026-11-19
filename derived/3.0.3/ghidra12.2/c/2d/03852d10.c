
void _INIT_8395(void)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  char local_b4 [127];
  undefined1 local_35;
  
  DAT_05ae5098 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae509c);
  DAT_05ae50a8 = 0x8004ef;
  DAT_05ae50b0 = nn::os::GetSystemTick();
  DAT_05ae50b8 = 0;
  DAT_05ae50c8 = &DAT_05ae50d4;
  DAT_05ae50d0 = 0x80;
  DAT_05ae5153 = 0;
  DAT_05ae50d4 = 0;
  DAT_05ae5168 = 0x80;
  DAT_05ae51eb = 0;
  DAT_05ae516c = 0;
  DAT_05ae5200 = 0x80;
  lVar3 = 0;
  DAT_05ae5160 = &DAT_05ae516c;
  DAT_05ae5283 = 0;
  local_b4[0] = '\0';
  local_35 = 0;
  DAT_05ae50c0 = &DAT_048fc708;
  DAT_05ae5158 = &DAT_048fc708;
  DAT_05ae5204 = 0;
  DAT_05ae51f0 = &DAT_048fc708;
  DAT_05ae51f8 = &DAT_05ae5204;
  do {
    if (local_b4[lVar3] == '\0') {
LAB_03852e38:
      iVar2 = (int)lVar3;
joined_r0x03852e3c:
      if (0x7f < iVar2) {
        iVar2 = 0x7f;
      }
      goto LAB_03852e44;
    }
    if (local_b4[lVar3 + 1] == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_03852e38;
    }
    if (local_b4[lVar3 + 2] == '\0') {
      iVar2 = (int)lVar3 + 2;
      goto joined_r0x03852e3c;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  iVar2 = 0;
LAB_03852e44:
  memcpy(&DAT_05ae516c,local_b4,(long)iVar2);
  (&DAT_05ae516c)[iVar2] = 0;
  puVar1 = DAT_05ae51f8;
  lVar3 = 0;
  local_35 = 0;
  do {
    if (local_b4[lVar3] == '\0') goto LAB_03852ec0;
    if (local_b4[lVar3 + 1] == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_03852ec0;
    }
    if (local_b4[lVar3 + 2] == '\0') {
      lVar3 = lVar3 + 2;
      goto LAB_03852ec0;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  lVar3 = 0;
LAB_03852ec0:
  iVar2 = (int)lVar3;
  if (DAT_05ae5200 <= (int)lVar3) {
    iVar2 = DAT_05ae5200 + -1;
  }
  memcpy(DAT_05ae51f8,local_b4,(long)iVar2);
  puVar1[iVar2] = 0;
  return;
}

