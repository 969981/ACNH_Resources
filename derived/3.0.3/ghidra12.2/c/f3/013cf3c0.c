
void FUN_013cf3c0(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *__dest;
  
  FUN_013cdf40(param_1,param_2 & 0xffffffffffffff,param_3);
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *param_1 = &PTR_LAB_04995800;
  param_1[0xce] = &PTR_LAB_049959d8;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 6;
    *(undefined4 *)((long)param_1 + lVar3 + 0x679) = 0x11400;
    *(undefined2 *)((long)param_1 + lVar3 + 0x67d) = 0x114;
    lVar3 = lVar1;
  } while (lVar1 != 0x360);
  param_1[0x13c] = &PTR_LAB_049959d8;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 6;
    *(undefined4 *)((long)param_1 + lVar3 + 0x9e9) = 0x11400;
    *(undefined2 *)((long)param_1 + lVar3 + 0x9ed) = 0x114;
    lVar3 = lVar1;
  } while (lVar1 != 0x360);
  param_1[0x1aa] = &PTR_LAB_049959d8;
  *(undefined1 *)(param_1 + 0x1ab) = 0;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 6;
    *(undefined4 *)((long)param_1 + lVar3 + 0xd59) = 0x11400;
    *(undefined2 *)((long)param_1 + lVar3 + 0xd5d) = 0x114;
    lVar3 = lVar1;
  } while (lVar1 != 0x360);
  param_1[0x218] = &PTR_LAB_049959d8;
  *(undefined1 *)(param_1 + 0x219) = 0;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 6;
    *(undefined4 *)((long)param_1 + lVar3 + 0x10c9) = 0x11400;
    *(undefined2 *)((long)param_1 + lVar3 + 0x10cd) = 0x114;
    lVar3 = lVar1;
  } while (lVar1 != 0x360);
  *(undefined1 *)((long)param_1 + 0x1432) = 0;
  *(undefined2 *)(param_1 + 0x286) = 5;
  __dest = (char *)param_1[0xc];
  if (__dest != "FishCreate") {
    iVar2 = 10;
    if (*(int *)(param_1 + 0xd) < 0xb) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"FishCreate",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  return;
}

