
/* WARNING: Removing unreachable block (ram,0x024d4d20) */

void FUN_024d4b68(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_58;
  int local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
        local_38 = lVar7;
      }
    }
  }
  local_4c = FUN_01ad78cc(&local_48);
  if (local_4c != 0x53) goto LAB_024d4d5c;
  uVar4 = FUN_016ebc50(0x4019999a,param_1 + 0xcdc);
  if ((uVar4 & 1) != 0) {
    uVar8 = *(undefined4 *)(param_1 + 0xcdc);
    puVar1 = (undefined4 *)(param_1 + 0x328);
    uVar9 = *(undefined4 *)(param_1 + 0xce0);
    uVar10 = *(undefined4 *)(param_1 + 0xce4);
    if (*(int *)(param_1 + 0x328) == 0) {
      lVar7 = 0;
      puVar5 = puVar1;
    }
    else if (*(int *)(param_1 + 0x340) == 0) {
      lVar7 = 1;
      puVar5 = (undefined4 *)(param_1 + 0x340);
    }
    else if (*(int *)(param_1 + 0x358) == 0) {
      lVar7 = 2;
      puVar5 = (undefined4 *)(param_1 + 0x358);
    }
    else {
      if (*(int *)(param_1 + 0x370) != 0) goto LAB_024d4ce0;
      lVar7 = 3;
      puVar5 = (undefined4 *)(param_1 + 0x370);
    }
    *(undefined2 *)(puVar5 + 1) = 0;
    *(undefined1 *)((long)puVar5 + 6) = 0;
    *puVar5 = 10;
    puVar1[lVar7 * 6 + 2] = uVar8;
    puVar1[lVar7 * 6 + 3] = uVar9;
    puVar1[lVar7 * 6 + 4] = uVar10;
    puVar1[lVar7 * 6 + 5] = 0x1000100;
  }
LAB_024d4ce0:
  local_58 = CONCAT44(local_58._4_4_,4);
  puVar6 = &DAT_0548ed14 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x8c;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    puVar6 = &DAT_0548f0e8;
  }
  puVar6[0x70] = 1;
  lVar7 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(puVar6 + 0x74) = *(undefined4 *)(lVar7 + 0x278);
  *(undefined4 *)(puVar6 + 0x78) = *(undefined4 *)(lVar7 + 0x27c);
  *(undefined4 *)(puVar6 + 0x7c) = *(undefined4 *)(lVar7 + 0x280);
  *(undefined4 *)(puVar6 + 0x80) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(puVar6 + 0x84) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(puVar6 + 0x88) = *(undefined4 *)(param_1 + 0x2b8);
LAB_024d4d5c:
  uVar4 = FUN_01ae5784(&local_48);
  if ((uVar4 & 1) != 0) {
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    local_58 = *(undefined8 *)(param_1 + 0x1908);
    FUN_0231de88(param_1,&local_58);
  }
  return;
}

