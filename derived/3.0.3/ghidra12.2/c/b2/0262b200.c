
void FUN_0262b200(undefined8 param_1,long param_2,undefined4 *param_3,long param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  puVar3 = PTR_DAT_04bb27d0;
  uVar9 = 0;
  plVar10 = (long *)PTR_DAT_04bb46b0;
  do {
    uVar11 = uVar9 >> 3;
    uVar2 = 1 << (ulong)((uint)uVar9 & 7);
    bVar6 = *(byte *)(param_2 + uVar11);
    if ((uVar2 & bVar6) != 0) {
      if ((uVar2 & *(byte *)(param_4 + uVar11)) == 0) {
LAB_0262b244:
        *(byte *)(param_2 + uVar11) = bVar6 & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
      }
      else {
        lVar7 = **(long **)puVar3;
        bVar6 = *(byte *)(lVar7 + 0x473);
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
          if (7 < bVar6) {
            pbVar1 = (byte *)(lVar7 + 0x48);
          }
          if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar6)) goto LAB_0262b254;
        }
        if ((*plVar10 != 0) && (lVar7 = FUN_026eec4c(*plVar10,*param_3), lVar7 != 0)) {
          lVar8 = lVar7 + 0x194b0;
          if (*(long *)(lVar7 + 0x194b8) == 0) {
            lVar8 = *(long *)(*plVar10 + 0x20);
          }
          if (*(long **)(lVar8 + 0x86b0) == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            puVar4 = (undefined8 *)**(long **)(lVar8 + 0x86b0);
            uVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar4)();
            }
          }
          bVar6 = *(byte *)(*(long *)(lVar8 + 0x8698) + *(long *)(lVar8 + 0x8690) + uVar11);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x86b0) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x86b0) + 8), puVar4 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar4)();
          }
          plVar10 = (long *)PTR_DAT_04bb46b0;
          if ((uVar2 & bVar6) != 0) {
            bVar6 = *(byte *)(param_2 + uVar11);
            goto LAB_0262b244;
          }
        }
      }
    }
LAB_0262b254:
    uVar2 = (uint)uVar9 + 1;
    uVar9 = (ulong)uVar2;
    if (uVar2 == 0x800) {
      return;
    }
  } while( true );
}

