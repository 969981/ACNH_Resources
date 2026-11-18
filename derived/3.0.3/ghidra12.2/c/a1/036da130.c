
void FUN_036da130(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  lVar3 = DAT_05abff60;
  puVar1 = (undefined8 *)PTR_DAT_04bc3a80;
  if (DAT_05abff60 != 0) {
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
      if (*(int *)(param_1 + 0x10) != 1) {
        return;
      }
    }
    else if (((uVar2 ^ 0xffff) & 3) != 0) {
      return;
    }
    if (((*(ushort *)(param_1 + 0xc0) & 0xf) == 1) && ((*(ushort *)(param_1 + 0x28) >> 3 & 1) == 0))
    {
      if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7975b8e8) && (lVar6 = FUN_03776f00(), lVar6 != 0)
         ) {
        if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar7)();
          uVar4 = uVar4 ^ 1;
        }
        uVar2 = *(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x153c);
        if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
        if ((uVar2 & 2) == 0) {
          FUN_036e5930(param_1);
          *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) | 0x10;
        }
      }
      if (DAT_05aed670 == 0) {
        puVar7 = &DAT_055c04a0;
      }
      else {
        puVar7 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar5 = FUN_006bd550(*puVar7,0);
          if (iVar5 != 0x758f7eaf) {
            puVar1 = &DAT_055c04a0;
          }
          puVar7 = puVar1;
        }
      }
      if ((*(int *)(puVar7 + 7) == -0x17df00c3) && (uVar8 = FUN_0375f040(lVar3), (uVar8 & 1) != 0))
      {
        FUN_036e6620(param_1);
        return;
      }
    }
  }
  return;
}

