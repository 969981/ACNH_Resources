
/* WARNING: Removing unreachable block (ram,0x03c3d898) */
/* WARNING: Removing unreachable block (ram,0x03c3d73c) */
/* WARNING: Removing unreachable block (ram,0x03c3d70c) */
/* WARNING: Removing unreachable block (ram,0x03c3d728) */
/* WARNING: Removing unreachable block (ram,0x03c3d87c) */
/* WARNING: Removing unreachable block (ram,0x03c3d8ac) */

void FUN_03c3d6c0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 1) = 5;
  lVar3 = param_1[0x1f];
  *(undefined1 *)(lVar3 + 0x3de) = 1;
  *(undefined8 *)(lVar3 + 0x450) = 0;
  uVar1 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar3 + 0x410) = uVar1;
  FUN_03c3d8e0(param_1[0x1a]);
  if (param_1[0x1b] != 0) {
    FUN_03c3d8e0();
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  if (*(long *)PTR_DAT_04bb2730 != 0) {
    FUN_0033d4e8(*(undefined8 *)(*(long *)PTR_DAT_04bb2730 + 0x330));
  }
  lVar3 = *(long *)PTR_DAT_04bb2718;
  if ((*(long *)PTR_DAT_04bb2720 == 0) ||
     (lVar4 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar4 == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar4 + 0xd0);
  }
  if (*(long *)(lVar3 + 0x458) != lVar3 + 0x450) {
    lVar7 = (long)*(int *)(lVar3 + 0x464);
    lVar4 = *(long *)(lVar3 + 0x458) - lVar7;
    do {
      uVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,lVar4);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar4 + 0x80) != lVar4 + 0x78) {
          lVar8 = (long)*(int *)(lVar4 + 0x8c);
          lVar6 = *(long *)(lVar4 + 0x80) - lVar8;
          do {
            FUN_03d5732c(lVar6);
            lVar6 = *(long *)(lVar6 + lVar8 + 8) - lVar8;
          } while (lVar6 != (lVar4 + 0x78) - lVar8);
        }
      }
      lVar4 = *(long *)(lVar4 + lVar7 + 8) - lVar7;
    } while (lVar4 != (lVar3 + 0x450) - lVar7);
  }
  FUN_03eb82fc(param_1[0x1f],6);
  lVar3 = param_1[0x1f];
  *(undefined1 *)(lVar3 + 0x3df) = 1;
  *(undefined8 *)(lVar3 + 0x458) = 0;
  uVar1 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar3 + 0x418) = uVar1;
  return;
}

