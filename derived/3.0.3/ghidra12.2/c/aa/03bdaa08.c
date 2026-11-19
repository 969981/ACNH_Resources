
undefined4 FUN_03bdaa08(long param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  
  uVar10 = (ulong)*(uint *)(param_1 + 0x38);
  plVar8 = (long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) + 0x28);
  uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
  puVar3 = PTR_DAT_04bb38c8;
  puVar2 = PTR_DAT_04bb38c0;
  if ((uVar10 == 0) || ((int)uVar4 < 0)) {
code_r0x03bdaad4:
    switch(param_2) {
    case 0xc:
      uVar11 = FUN_03bd475c(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    case 0xd:
      uVar11 = FUN_03bd4850(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    case 0xe:
      uVar11 = FUN_03bd493c(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    case 0xf:
      uVar11 = FUN_03bd4a28(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    case 0x10:
      uVar11 = FUN_03bd4b14(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    case 0x11:
      uVar11 = FUN_03bd4c00(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    case 0x12:
      uVar11 = FUN_03bd4cf0(plVar8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      break;
    default:
      uVar11 = 0;
    }
    uVar10 = FUN_03bea160(plVar8,2,*(undefined8 *)(param_1 + 0x28),param_2);
    if ((uVar10 & 1) == 0) {
      return uVar11;
    }
    goto LAB_03bdab7c;
  }
  puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar10) + 0x40000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar10) {
    puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar10);
  }
  if ((*puVar1 >> (ulong)(uVar4 & 0x1f) & 1) == 0) goto code_r0x03bdaad4;
  uVar11 = 0;
  switch(param_2) {
  case 0xc:
    lVar6 = *plVar8;
    uVar5 = 0xc;
    break;
  case 0xd:
    lVar6 = *plVar8;
    uVar5 = 0xd;
    goto LAB_03bdac10;
  case 0xe:
    lVar6 = *plVar8;
    uVar5 = 0xe;
    break;
  case 0xf:
    lVar6 = *plVar8;
    uVar5 = 0xf;
    break;
  case 0x10:
    lVar6 = *plVar8;
    uVar5 = 0x10;
    break;
  case 0x11:
    lVar6 = *plVar8;
    uVar5 = 0x11;
    goto LAB_03bdac10;
  case 0x12:
    lVar6 = *plVar8;
    uVar5 = 0x12;
LAB_03bdac10:
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = (**(code **)(lVar6 + 0x50))(plVar8,uVar5);
    goto joined_r0x03bdac20;
  default:
    goto switchD_03bdaab4_default;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = (**(code **)(lVar6 + 0x50))(plVar8,uVar5);
joined_r0x03bdac20:
  if (-1 < (int)uVar4) {
    puVar7 = (uint *)(*(ulong *)puVar3 | uVar10);
    puVar1 = puVar7 + 0x40000000;
    if (*(ulong *)puVar2 <= uVar10) {
      puVar1 = puVar7;
    }
    if ((*puVar1 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
      uVar4 = *puVar1 & 0xffffffffU >> (ulong)(~uVar4 & 0x1f);
      uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar11 = FUN_03be93d4(plVar8,puVar1 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) + 1,
                            uVar9);
    }
  }
switchD_03bdaab4_default:
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,param_2);
  uVar10 = uVar10 & 0xfffffffc;
  if ((uVar10 != 0) && (-1 < (int)uVar4)) {
    puVar7 = (uint *)(*(ulong *)puVar3 | uVar10);
    puVar1 = puVar7 + 0x40000000;
    if (*(ulong *)puVar2 <= uVar10) {
      puVar1 = puVar7;
    }
    if (((*puVar1 >> (ulong)(uVar4 & 0x1f) & 1) != 0) &&
       (uVar4 = *puVar1 & 0xffffffffU >> (ulong)(~uVar4 & 0x1f),
       uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555),
       uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
       uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f, uVar4 = uVar4 + (uVar4 >> 8),
       *(char *)((long)puVar1 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) * 4 + 7) == '\x02'
       )) {
LAB_03bdab7c:
      *(ushort *)(param_1 + 0xb8) =
           *(ushort *)(param_1 + 0xb8) | (ushort)(1 << (ulong)(param_3 & 0x1f));
    }
  }
  return uVar11;
}

