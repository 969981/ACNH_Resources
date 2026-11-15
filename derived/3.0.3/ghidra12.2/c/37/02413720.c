
void FUN_02413720(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  uVar1 = 6;
  if (*(char *)(param_1 + 0x1900) != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x1901);
  }
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (((puVar7[0x227] != 0) && (lVar4 = *(long *)(puVar7[0x227] + 0x78), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&DAT_054bd650,0);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar7 = &DAT_05240280;
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (((puVar7[0x227] != 0) && (lVar4 = *(long *)(puVar7[0x227] + 0x78), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(0,plVar2,&DAT_054bd660);
  }
  local_38 = 3;
  local_34 = 3;
  if ((*(byte *)(param_1 + 0x18f4) >> 3 & 1) == 0) {
    local_34 = 3;
    FUN_023164ec(param_1,uVar1);
  }
  else if (*(int *)(param_1 + 0x178) == 0) {
    if (*(char *)(param_1 + 0x1902) == '\0') {
      if (*(int *)(param_1 + 0x1810) == 5) {
        FUN_023164ec(param_1,uVar1);
      }
      FUN_0231b68c(param_1,uVar1);
      if (*(char *)(param_1 + 0x1904) == '\0') goto LAB_02413870;
    }
    else {
      FUN_023164ec(param_1,uVar1);
    }
    *(undefined1 *)(param_1 + 0x8a0) = 0;
    *(undefined1 *)(param_1 + 0x8ac) = 0;
    *(undefined8 *)(param_1 + 0x8a4) = 0;
  }
  else {
    FUN_0231b68c(param_1,uVar1);
  }
LAB_02413870:
  uVar3 = *(uint *)(param_1 + 0x1810);
  if ((uVar3 & 0xfffffff7) == 1) {
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar4 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar4 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar8 = *(float *)(lVar4 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar8 * 999.99994);
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  if (uVar3 - 2 < 3) {
    puVar7 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar7 + 0x2ec) = uVar9;
    *(undefined1 *)((long)puVar7 + 0x2e5) = 1;
    uVar3 = *(uint *)(param_1 + 0x1810);
  }
  local_34 = uVar3;
  if (uVar3 - 2 < 2) {
    local_40 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    FUN_016d88bc(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_40);
  }
  else if (uVar3 == 4) {
    local_3c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
    FUN_016da530(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_3c);
  }
  return;
}

