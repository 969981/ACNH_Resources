
void FUN_034d2630(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bc4e68;
  puVar2 = PTR_DAT_04bb43c0;
  uVar9 = 0;
  puVar1 = PTR_DAT_04bc4e68 + 0x10;
  do {
    FUN_034cf150(auStack_78,uVar9 & 0xffffffff);
    lVar12 = *(long *)puVar2;
    plVar10 = *(long **)(*(long *)(param_1 + 0x218) + uVar9 * 8 + 0x570);
    uVar6 = FUN_0277d6c4(auStack_78);
    if (*(long *)puVar2 == 0) {
LAB_034d2720:
      bVar4 = false;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (*(uint *)(lVar12 + 0x1d8) <= uVar6) goto LAB_034d2720;
      bVar4 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0;
    }
    (**(code **)(*plVar10 + 0x140))(plVar10,bVar4,0);
    lVar12 = *(long *)puVar2;
    uVar6 = FUN_0277d6c4(auStack_78);
    if (*(long *)puVar2 == 0) {
LAB_034d2780:
      bVar4 = false;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (*(uint *)(lVar12 + 0x1d8) <= uVar6) goto LAB_034d2780;
      bVar4 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0;
    }
    bVar5 = FUN_033fa420();
    uVar11 = 0;
    if ((bVar4 & bVar5) == 0) {
      uVar11 = 2;
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar11);
    switch(uVar11) {
    case 0:
      bVar8 = *(byte *)(plVar10 + 0x58) & 0xf8 | 2;
      break;
    case 2:
      bVar8 = *(byte *)(plVar10 + 0x58) & 0xf8 | 1;
      break;
    default:
      goto switchD_034d27ac_default;
    }
    *(byte *)(plVar10 + 0x58) = bVar8;
switchD_034d27ac_default:
    *(undefined4 *)(plVar10 + 0x56) = uVar11;
    plVar10 = *(long **)(plVar10[0x5e] + (ulong)(1 < *(uint *)(plVar10 + 0x5d)) * 8);
    if (plVar10 != (long *)0x0) {
      if (((bVar5 | bVar4 ^ 0xffU) & 1) == 0) {
        local_70 = puVar3 + 0x10;
        local_68 = 7;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
        puVar7 = (undefined8 *)(plVar10[3] + 0x1c0);
      }
      else {
        local_68 = 6;
        local_70 = puVar1;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
        puVar7 = (undefined8 *)(plVar10[3] + 0x1b8);
      }
      (*(code *)*puVar7)(plVar10[1]);
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == 0xc) {
      return;
    }
  } while( true );
}

