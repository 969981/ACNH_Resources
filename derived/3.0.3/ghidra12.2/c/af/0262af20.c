
void FUN_0262af20(undefined8 param_1,long param_2,undefined4 *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  
  puVar4 = PTR_DAT_04bb27d0;
  uVar9 = 0;
  plVar10 = (long *)PTR_DAT_04bb46b0;
  do {
    uVar11 = (ulong)(uVar9 >> 3);
    uVar3 = 1 << (ulong)(uVar9 & 7);
    if (((uVar3 & *(byte *)(param_2 + uVar11)) == 0) && ((uVar3 & *(byte *)(param_4 + uVar11)) != 0)
       ) {
      lVar7 = **(long **)puVar4;
      bVar2 = *(byte *)(lVar7 + 0x473);
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
        if (7 < bVar2) {
          pbVar1 = (byte *)(lVar7 + 0x48);
        }
        if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) goto LAB_0262af64;
      }
      if ((*plVar10 != 0) && (lVar7 = FUN_026eec4c(*plVar10,*param_3), lVar7 != 0)) {
        lVar8 = lVar7 + 0x194b0;
        if (*(long *)(lVar7 + 0x194b8) == 0) {
          lVar8 = *(long *)(*plVar10 + 0x20);
        }
        if (*(long **)(lVar8 + 0x86b0) == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(lVar8 + 0x86b0);
          uVar6 = 0;
          if (puVar5 != (undefined8 *)0x0) {
            uVar6 = (**(code **)*puVar5)();
          }
        }
        bVar2 = *(byte *)(*(long *)(lVar8 + 0x8698) + *(long *)(lVar8 + 0x8690) + uVar11);
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x86b0) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x86b0) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        plVar10 = (long *)PTR_DAT_04bb46b0;
        if ((uVar3 & bVar2) != 0) {
          *(byte *)(param_2 + uVar11) =
               *(byte *)(param_2 + uVar11) | (byte)(1 << (ulong)(uVar9 & 7));
        }
      }
    }
LAB_0262af64:
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x800) {
      return;
    }
  } while( true );
}

