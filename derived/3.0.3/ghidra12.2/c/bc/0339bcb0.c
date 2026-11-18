
uint FUN_0339bcb0(long param_1,int param_2,byte *param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long extraout_x9;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined **local_50;
  char local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  local_50 = (undefined **)CONCAT44(local_50._4_4_,param_2);
  lVar5 = extraout_x9;
  if (*(long *)(param_1 + 0x170) != param_1 + 0x168) {
    lVar3 = (long)*(int *)(param_1 + 0x17c);
    lVar5 = -lVar3;
    lVar6 = *(long *)(param_1 + 0x170) - lVar3;
    do {
      if (*(int *)(lVar6 + 0x10) == param_2) {
        if (*param_3 < 8) {
          bVar7 = *(byte *)(lVar6 + 0x14);
          if (7 < bVar7) {
            bVar7 = 0xff;
          }
          if (bVar7 != *param_3) goto LAB_0339bd18;
        }
        lVar8 = *(long *)(lVar6 + 0x80);
        if (lVar8 != 0) {
          local_50 = &PTR_FUN_04b23ff0;
          local_48 = '\x01';
          nn::os::LockMutex((MutexType *)(lVar8 + 0xf0));
          if (*(long *)(lVar8 + 0x48) == lVar8 + 0x40) goto LAB_0339bdfc;
          lVar6 = (long)*(int *)(lVar8 + 0x54);
          lVar5 = *(long *)(lVar8 + 0x48) - lVar6;
          goto LAB_0339bdd0;
        }
      }
LAB_0339bd18:
      lVar6 = *(long *)(lVar6 + lVar3 + 8) + lVar5;
    } while (lVar6 != (param_1 + 0x168) - lVar3);
  }
  uVar4 = (uint)lVar5;
  uVar2 = 1;
  goto LAB_0339bd60;
  while (lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6, lVar5 != (lVar8 + 0x40) - lVar6) {
LAB_0339bdd0:
    uVar1 = (*(code *)*local_50)(&local_50,lVar5);
    if ((uVar1 & 1) != 0) break;
  }
LAB_0339bdfc:
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0xf0));
  uVar2 = 0;
  uVar4 = (uint)(local_48 != '\0');
LAB_0339bd60:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return uVar2 | uVar4 & 1;
}

