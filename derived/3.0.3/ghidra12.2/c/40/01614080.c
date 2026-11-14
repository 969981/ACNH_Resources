
void FUN_01614080(long param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *local_f0;
  undefined1 local_e8 [144];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar6 = *param_2;
  if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= uVar6) {
    uVar6 = 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)uVar6 * 8);
  if (((*PTR_DAT_04bbdb10 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbdb10), iVar7 != 0))
  {
    *(undefined ***)PTR_DAT_04bbdb08 = &PTR_FUN_049b3b80;
    __cxa_guard_release(PTR_DAT_04bbdb10);
  }
  if ((plVar9 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bbdb08), (uVar8 & 1) != 0)) {
    lVar4 = plVar9[0xf];
    lVar5 = plVar9[0x10];
    memcpy(local_e8,(void *)(lVar5 + 8),0x90);
    local_58 = *(undefined8 *)(lVar5 + 0x98);
    local_f0 = PTR_DAT_04bbd858 + 0x10;
    local_50 = *(undefined8 *)(lVar5 + 0xa0);
    local_48 = *(undefined8 *)(lVar5 + 0xa8);
    uStack_40 = *(undefined8 *)(lVar5 + 0xb0);
    local_38 = *(undefined4 *)(lVar5 + 0xb8);
    if ((*param_2 == 0) && (*(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) + 0x3c) != 0.0))
    {
      local_e8[0] = 1;
      local_58 = CONCAT44(*(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) + 0x5c) + 180.0,
                          (undefined4)local_58);
    }
    uVar10 = *(undefined8 *)(lVar4 + 8);
    puVar2 = (undefined8 *)(param_1 + 0x138) + (ulong)*param_2 * 0x47;
    if (5 < *param_2) {
      puVar2 = (undefined8 *)(param_1 + 0x138);
    }
    puVar2[1] = *(undefined8 *)(lVar4 + 0x10);
    *puVar2 = uVar10;
    uVar10 = *(undefined8 *)(lVar4 + 0x18);
    puVar2[3] = *(undefined8 *)(lVar4 + 0x20);
    puVar2[2] = uVar10;
    uVar10 = *(undefined8 *)(lVar4 + 0x28);
    puVar2[5] = *(undefined8 *)(lVar4 + 0x30);
    puVar2[4] = uVar10;
    FUN_007535b4(puVar2 + 6,(undefined8 *)(lVar4 + 8));
    FUN_03983a20(puVar2,&local_f0);
    puVar1 = (undefined4 *)(param_1 + 0xed8);
    puVar3 = puVar1 + (ulong)*param_2 * 4;
    if (5 < *param_2) {
      puVar3 = puVar1;
    }
    *puVar3 = *(undefined4 *)(lVar4 + 0x38);
    puVar3[1] = *(undefined4 *)(lVar4 + 0x3c);
    puVar3[2] = *(undefined4 *)(lVar4 + 0x40);
    puVar3 = puVar1 + (ulong)*param_2 * 4;
    if (5 < *param_2) {
      puVar3 = puVar1;
    }
    puVar3[3] = (undefined4)local_58;
  }
  return;
}

