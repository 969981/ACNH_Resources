
/* WARNING: Removing unreachable block (ram,0x02c2128c) */
/* WARNING: Removing unreachable block (ram,0x02c21298) */
/* WARNING: Removing unreachable block (ram,0x02c2127c) */
/* WARNING: Removing unreachable block (ram,0x02c21288) */
/* WARNING: Removing unreachable block (ram,0x02c211d0) */
/* WARNING: Removing unreachable block (ram,0x02c211dc) */
/* WARNING: Removing unreachable block (ram,0x02c211e0) */
/* WARNING: Removing unreachable block (ram,0x02c211ec) */
/* WARNING: Removing unreachable block (ram,0x02c2132c) */
/* WARNING: Removing unreachable block (ram,0x02c21338) */
/* WARNING: Removing unreachable block (ram,0x02c2133c) */
/* WARNING: Removing unreachable block (ram,0x02c21348) */

void FUN_02c210a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 local_68 [11];
  
  switch(*(undefined4 *)(*(long *)(param_1 + 0xf08) + 0x260)) {
  case 1:
    lVar3 = *(long *)(param_1 + 0xef0);
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    local_7c = *(uint *)(lVar3 + 0x18);
    lVar3 = *(long *)(lVar3 + 8);
    iVar4 = 0;
    if (lVar3 == 0) goto switchD_02c210d8_default;
    goto LAB_02c21138;
  case 2:
    lVar3 = *(long *)(param_1 + 0xef0);
    iVar4 = 1;
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0xef0);
    iVar4 = 2;
    break;
  case 4:
    lVar3 = *(long *)(param_1 + 0xef0);
    iVar4 = 3;
    break;
  case 5:
    lVar3 = *(long *)(param_1 + 0xef0);
    iVar4 = 4;
    break;
  default:
    goto switchD_02c210d8_default;
  }
  *(int *)(lVar3 + 0x1c) = iVar4;
  local_7c = *(uint *)(lVar3 + 0x18);
  lVar3 = *(long *)(lVar3 + 8);
  if (lVar3 != 0) {
LAB_02c21138:
    if (iVar4 == 4) {
      uVar5 = 0xc;
    }
    else {
      if (2 < local_7c) {
        local_7c = 0;
      }
      uVar5 = (&DAT_0417fd1c)[(int)local_7c];
    }
    *(undefined4 *)(lVar3 + 0x274) = uVar5;
  }
switchD_02c210d8_default:
  lVar3 = *(long *)(param_1 + 0xf00);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0xef0) != 0)) {
    local_70 = local_68;
    local_68[0] = (*(undefined8 **)(lVar3 + 0x280))[1 < *(uint *)(lVar3 + 0x278)];
    local_68[1] = **(undefined8 **)(lVar3 + 0x280);
    lVar6 = *(long *)(param_1 + 0x210);
    local_78[0] = 2;
    lVar3 = *(long *)(lVar6 + 0x5c0);
    if (lVar3 == 0) {
      uVar2 = 2;
    }
    else {
      puVar7 = *(undefined8 **)(lVar3 + 0x2d0);
      local_68[2] = *puVar7;
      local_68[3] = puVar7[1 < *(uint *)(lVar3 + 0x2c8)];
      local_68[4] = puVar7[(ulong)(2 < *(uint *)(lVar3 + 0x2c8)) * 2];
      uVar2 = 5;
      local_78[0] = 5;
    }
    lVar3 = *(long *)(lVar6 + 0x5c8);
    if (lVar3 != 0) {
      local_70[uVar2] = **(undefined8 **)(lVar3 + 0x2d0);
      local_70[uVar2 + 1] =
           *(undefined8 *)(*(long *)(lVar3 + 0x2d0) + (ulong)(1 < *(uint *)(lVar3 + 0x2c8)) * 8);
      uVar1 = uVar2 + 2;
      uVar2 = uVar2 + 3;
      local_70[uVar1] =
           *(undefined8 *)(*(long *)(lVar3 + 0x2d0) + (ulong)(2 < *(uint *)(lVar3 + 0x2c8)) * 0x10);
      local_78[0] = uVar2;
    }
    local_78[1] = 0xb;
    lVar3 = *(long *)(lVar6 + 0x5d0);
    if (lVar3 != 0) {
      if (uVar2 < 0xb) {
        local_70[uVar2] = **(undefined8 **)(lVar3 + 0x2d0);
        uVar2 = local_78[0] + 1;
        local_78[0] = uVar2;
      }
      if (uVar2 < 0xb) {
        local_70[(int)uVar2] =
             *(undefined8 *)(*(long *)(lVar3 + 0x2d0) + (ulong)(1 < *(uint *)(lVar3 + 0x2c8)) * 8);
        uVar2 = local_78[0] + 1;
        local_78[0] = uVar2;
      }
      if (uVar2 < 0xb) {
        local_70[(int)uVar2] =
             *(undefined8 *)
              (*(long *)(lVar3 + 0x2d0) + (ulong)(2 < *(uint *)(lVar3 + 0x2c8)) * 0x10);
        local_78[0] = local_78[0] + 1;
      }
    }
    FUN_0344abd0(local_78,*(long *)(param_1 + 0xef0) + 0x28,
                 *(undefined4 *)(*(long *)(param_1 + 0xef0) + 0x1c));
  }
  return;
}

