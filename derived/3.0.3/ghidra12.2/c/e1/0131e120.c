
void FUN_0131e120(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auStack_78 [8];
  uint *local_70;
  undefined4 local_64;
  
  uVar8 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x18);
  *(uint *)(param_1 + 0x1d8) = param_2;
  uVar9 = 0;
  do {
    uVar6 = (ulong)uVar9;
    if (0x38 < uVar9) {
      uVar6 = 0;
    }
    if (uVar9 != 0 && (1 << (ulong)(param_2 & 0x1f) & (uint)(byte)(&DAT_0518b1a8)[uVar6]) != 0) {
      uVar6 = (ulong)uVar9;
      if (0x38 < uVar9) {
        uVar6 = 0;
      }
      if (*(long *)(param_1 + 8 + uVar6 * 8) == 0) {
        puVar1 = &DAT_0516b108 + uVar9;
        if (0x38 < uVar9) {
          puVar1 = &DAT_0516b108;
        }
        local_64 = *puVar1;
        FUN_01272190(auStack_78,&local_64);
        if (local_70 == (uint *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar3 = *local_70;
          uVar5 = 0;
          if ((uVar3 != 0) && (local_70 != (uint *)(ulong)uVar3)) {
            puVar7 = (uint *)((long)local_70 - (long)(ulong)uVar3);
            uVar5 = 0;
            if (*puVar7 != 0) {
              uVar5 = puVar7[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar2 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar3 = (uint)((ulong)((long)local_70 - lVar2) / (ulong)uVar5);
                  }
                  if (*puVar7 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bbbdb8) &&
                     (uVar5 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bbbdb8 + 8) + (long)(int)uVar3 * 2),
                     uVar5 < 0xe)) goto LAB_0131e194;
                }
              }
              uVar5 = 0;
            }
          }
LAB_0131e194:
          if (0xd < uVar5) {
            uVar5 = 0;
          }
          uVar4 = FUN_012aa334((&PTR_DAT_0498df78)[(int)uVar5],uVar8,auStack_78);
        }
        uVar6 = (ulong)uVar9;
        if (0x38 < uVar9) {
          uVar6 = 0;
        }
        *(undefined8 *)(param_1 + 8 + uVar6 * 8) = uVar4;
      }
    }
    uVar5 = 0x39;
    if ((int)uVar9 < 0x39) {
      uVar5 = uVar9 + 1;
    }
    uVar9 = uVar5;
    if (uVar5 == 0x39) {
      return;
    }
  } while( true );
}

