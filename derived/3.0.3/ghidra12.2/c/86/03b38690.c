
bool FUN_03b38690(long param_1,uint param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *__dest;
  void *__src;
  long lVar12;
  long lVar13;
  
  plVar1 = (long *)(param_1 + 8);
  uVar8 = (ulong)param_2;
  plVar4 = plVar1 + param_2;
  if (0x1f < param_2) {
    uVar8 = 0;
    plVar4 = plVar1;
  }
  lVar12 = *plVar4;
  if (lVar12 == 0) {
    param_1 = param_1 + 0x140;
    uVar10 = (ulong)(param_2 * 0x58);
    lVar13 = param_1 + uVar10;
    if (0xaff < param_2 * 0x58) {
      uVar10 = 0;
      lVar13 = param_1;
    }
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x28) = 0;
    *(undefined8 *)(lVar13 + 0x30) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined8 *)(lVar13 + 0x40) = 0;
    puVar11 = (undefined8 *)(lVar13 + 0x50);
    *puVar11 = 0;
    *(undefined1 *)(lVar13 + 0x2c) = 0;
    *(undefined4 *)(lVar13 + 0x28) = 0x20;
    *(undefined1 **)(lVar13 + 0x20) = (undefined1 *)(lVar13 + 0x2c);
    cVar6 = DAT_05aebc00;
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined ***)(lVar13 + 0x18) = &PTR_LAB_048f9700;
    if (cVar6 == '\0') {
      *(undefined ***)(param_1 + uVar10) = &PTR_LAB_04b76150;
      *(undefined8 *)(lVar13 + 8) = param_3;
      *(undefined ***)(lVar13 + 0x50) = &PTR_LAB_04b76178;
      *(uint *)(lVar13 + 0x10) = param_2 + 0x40;
      plVar1[uVar8] = lVar13;
      uVar7 = FUN_03b38a74();
      FUN_003b6364(uVar7,param_2 + 0x40,puVar11);
    }
    else {
      *(undefined ***)(param_1 + uVar10) = &PTR_LAB_04b76100;
      *(undefined8 *)(lVar13 + 8) = param_3;
      *(undefined ***)(lVar13 + 0x50) = &PTR_LAB_04b76128;
      *(uint *)(lVar13 + 0x10) = param_2 + 0x10;
      plVar1[uVar8] = lVar13;
      *(undefined8 **)(*(long *)(DAT_05aebb88 + 0x168) + (ulong)(param_2 + 0x10) * 8 + 8) = puVar11;
    }
    lVar13 = plVar1[uVar8];
    __dest = *(void **)(lVar13 + 0x20);
    (**(code **)(*param_4 + 0x18))(param_4);
    __src = (void *)param_4[1];
    if (__dest != __src) {
      (**(code **)(*param_4 + 0x18))(param_4);
      lVar9 = 0;
      do {
        if (*(char *)(param_4[1] + lVar9) == '\0') goto LAB_03b3881c;
        lVar2 = param_4[1] + lVar9;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03b3881c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03b3881c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03b3881c:
      iVar5 = *(int *)(lVar13 + 0x28);
      iVar3 = (int)lVar9;
      if (iVar5 <= (int)lVar9) {
        iVar3 = iVar5 + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
  }
  return lVar12 == 0;
}

