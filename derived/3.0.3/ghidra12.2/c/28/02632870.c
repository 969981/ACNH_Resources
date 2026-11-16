
void FUN_02632870(undefined8 param_1,long param_2,byte *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar9 = *param_3;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar9);
  lVar1 = FUN_02583354(DAT_055021a0,&local_78,1);
  if (lVar1 != 0) {
    uVar11 = 0;
    do {
      if ((*(byte *)(param_2 + (uVar11 >> 3)) >> (ulong)((uint)uVar11 & 7) & 1) != 0)
      goto LAB_026328f8;
      uVar6 = (uint)uVar11 + 1;
      uVar11 = (ulong)uVar6;
    } while (uVar6 != 0x800);
    uVar11 = 0;
LAB_026328f8:
    iVar10 = 0x800;
    do {
      if ((*(byte *)(param_2 + (ulong)(iVar10 - 1U >> 3)) >> (ulong)(iVar10 - 1U & 7) & 1) != 0)
      break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (iVar10 != (int)uVar11) {
LAB_0263296c:
      if ((uint)uVar11 < 0x800) {
        uVar12 = uVar11 >> 3;
        uVar6 = 1 << (ulong)((uint)uVar11 & 7);
        if ((uVar6 & *(byte *)(param_4 + uVar12)) != 0) {
          lVar7 = lVar1 + 0x194b0;
          if (*(long *)(lVar1 + 0x194b8) == 0) {
            lVar7 = *(long *)(DAT_05574040 + 0x20);
          }
          lVar8 = *(long *)(lVar7 + 0x86b0);
          if (lVar8 == 0) {
            uVar2 = 0;
          }
          else {
            if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
              uVar2 = 0;
              plVar3 = *(long **)(lVar8 + 0x20);
            }
            else {
              uVar2 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
              uVar2 = uVar2 & 0xffffffff;
              if (*(long *)(lVar7 + 0x86b0) == 0) goto LAB_02632a24;
              plVar3 = *(long **)(*(long *)(lVar7 + 0x86b0) + 0x20);
            }
            if (plVar3 != (long *)0x0) {
              local_78 = *(long *)(lVar7 + 0x8690);
              local_70 = *(undefined8 *)(lVar7 + 0x8698);
              uStack_68 = 0x1400;
              (**(code **)(*plVar3 + 0x20))(plVar3,&local_78);
            }
          }
LAB_02632a24:
          lVar8 = *(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690);
          *(byte *)(lVar8 + uVar12) = *(byte *)(lVar8 + uVar12) & ((byte)uVar6 ^ 0xff);
          if ((((uVar2 & 1) != 0) && (*(long *)(lVar7 + 0x86b0) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 0x18),
             puVar4 != (undefined8 *)0x0)) {
            (**(code **)*puVar4)();
          }
        }
      }
      do {
        uVar6 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar6;
        if (0x7ff < uVar6) {
          uVar6 = 0x7fe;
          goto LAB_02632a90;
        }
      } while ((*(byte *)(param_2 + (ulong)(uVar6 >> 3)) >> (ulong)(uVar6 & 7) & 1) == 0);
      goto LAB_02632964;
    }
  }
  return;
  while (uVar6 = uVar6 - 2, uVar6 != 0xfffffffe) {
LAB_02632a90:
    uVar5 = uVar6 + 1;
    if (((*(byte *)(param_2 + (ulong)(uVar5 >> 3)) >> (ulong)(uVar5 & 7) & 1) != 0) ||
       (uVar5 = uVar6, (*(byte *)(param_2 + (ulong)(uVar6 >> 3)) >> (ulong)(uVar6 & 7) & 1) != 0)) {
      uVar11 = (ulong)(uVar5 + 1);
      goto LAB_02632964;
    }
  }
  uVar11 = 0;
LAB_02632964:
  if (iVar10 == (int)uVar11) {
    return;
  }
  goto LAB_0263296c;
}

