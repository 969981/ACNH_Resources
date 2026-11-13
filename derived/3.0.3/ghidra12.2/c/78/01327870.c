
void FUN_01327870(long *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *__dest;
  char *__src;
  long lVar3;
  size_t __n;
  undefined1 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined1 *)((long)param_1 + 0x14);
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 2) = 0x40;
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  *(int *)(param_1 + 0xb) = param_2;
  *(undefined4 *)((long)param_1 + 0x5c) = param_3;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)puVar4;
  if (param_2 == 2) {
    lVar3 = 0;
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    do {
      if (*(char *)((long)param_1 + lVar3 + 0x14) == '\0') goto LAB_013279d8;
      if (*(char *)((long)param_1 + lVar3 + 0x15) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_013279d8;
      }
      if (*(char *)((long)param_1 + lVar3 + 0x16) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_013279d8;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_013279d8:
    uVar5 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
    uVar1 = 0x16;
    if (0x29 < uVar5) {
      uVar1 = 0x3f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_01327a50;
    __dest = puVar4 + uVar5;
    __src = "CloudIslandPresetLarge";
  }
  else if (param_2 == 1) {
    lVar3 = 0;
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    do {
      if (*(char *)((long)param_1 + lVar3 + 0x14) == '\0') goto LAB_01327a14;
      if (*(char *)((long)param_1 + lVar3 + 0x15) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01327a14;
      }
      if (*(char *)((long)param_1 + lVar3 + 0x16) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01327a14;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01327a14:
    uVar5 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
    uVar1 = 0x17;
    if (0x28 < uVar5) {
      uVar1 = 0x3f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_01327a50;
    __dest = puVar4 + uVar5;
    __src = "CloudIslandPresetMedium";
  }
  else {
    if (param_2 != 0) goto LAB_01327a50;
    lVar3 = 0;
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    do {
      if (*(char *)((long)param_1 + lVar3 + 0x14) == '\0') goto LAB_0132799c;
      if (*(char *)((long)param_1 + lVar3 + 0x15) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0132799c;
      }
      if (*(char *)((long)param_1 + lVar3 + 0x16) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0132799c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0132799c:
    uVar5 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
    uVar1 = 0x16;
    if (0x29 < uVar5) {
      uVar1 = 0x3f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_01327a50;
    __dest = puVar4 + uVar5;
    __src = "CloudIslandPresetSmall";
  }
  memcpy(__dest,__src,__n);
  puVar4[(int)__n + uVar5] = 0;
LAB_01327a50:
  FUN_038d13f0(param_1,&DAT_040d486c,param_3);
  return;
}

