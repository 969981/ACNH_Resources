
void FUN_02983df0(long param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined *local_58;
  undefined8 *local_50;
  long local_48;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  
  if (*(char *)(param_1 + 0x96) != '\0') {
    FUN_00767998(param_1 + 0x70,0xffffffff);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  if (((*PTR_DAT_04bbde00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar5 != 0))
  {
    FUN_016cb6ac(PTR_DAT_04bbddf8);
    __cxa_guard_release(PTR_DAT_04bbde00);
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  uVar9 = uVar3;
  if (*(uint *)PTR_DAT_04bbddf8 <= uVar3) {
    uVar9 = 0;
  }
  if (*(int *)(*(long *)(PTR_DAT_04bbddf8 + 8) + (long)(int)uVar9 * 4) != 0) {
    local_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    local_38 = 0;
    local_34 = 0;
    local_33 = 0;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    if (uVar3 < 0x18) {
      local_50 = *(undefined8 **)(PTR_s_Silence_04bc3d78 + (ulong)uVar3 * 8 + 0xa8);
    }
    else {
      local_50 = &DAT_0407ebb1;
    }
    local_48 = param_1 + 0x70;
    if (((*(byte *)(param_1 + 0x40) & 1) == 0) || (lVar7 = *(long *)(param_1 + 0x48), lVar7 == 0)) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = *(undefined8 **)(lVar7 + 0x18);
      if ((*(byte *)(lVar7 + 8) & 10) != 2) {
        puVar8 = (undefined8 *)0x0;
      }
    }
    if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd3a0);
    }
    uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bbd398);
    if ((uVar6 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    iVar5 = *(int *)(puVar8 + 0x38);
    iVar4 = *(int *)(puVar8 + 0x37);
    if (iVar5 < iVar4) {
      *(int *)(puVar8 + 0x38) = iVar5 + 1;
      if (puVar8[0x36] != 0) {
        iVar5 = *(int *)((long)puVar8 + 0x1bc) + iVar5;
        iVar2 = 0;
        if (iVar4 <= iVar5) {
          iVar2 = iVar4;
        }
        puVar10 = (undefined1 *)(puVar8[0x36] + (long)(iVar5 - iVar2) * 0xb0);
        *puVar10 = local_33;
        puVar10[1] = local_34;
        *(long *)(puVar10 + 8) = local_48;
        *(undefined4 *)(puVar10 + 0x10) = local_40;
        *(uint *)(puVar10 + 0x14) = CONCAT22(uStack_3a,uStack_3c);
        *(undefined4 *)(puVar10 + 0x18) = local_38;
        (**(code **)(local_58 + 0x18))(&local_58);
        puVar8 = *(undefined8 **)(puVar10 + 0x20);
        if (puVar8 != local_50) {
          lVar7 = 0;
          do {
            pcVar1 = (char *)((long)local_50 + lVar7);
            lVar7 = lVar7 + 1;
          } while (*pcVar1 != '\0');
          uVar9 = (int)lVar7 - 1;
          if (*(int *)(puVar10 + 0x2c) <= (int)uVar9) {
            uVar9 = *(int *)(puVar10 + 0x2c) - 1;
          }
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          else {
            memcpy(puVar8,local_50,(ulong)uVar9);
            puVar8 = (undefined8 *)((long)puVar8 + (ulong)uVar9);
          }
          *(undefined1 *)puVar8 = 0;
          *(uint *)(puVar10 + 0x28) = uVar9;
        }
      }
    }
  }
  return;
}

