
uint FUN_0232697c(byte *param_1,undefined8 param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar5 = FUN_016e6498();
  if ((uVar5 & 1) == 0) {
    if (DAT_04c487d4 != -1) {
      puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar9 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar9 >> 0x15 & 1) != 0) goto LAB_02326c04;
    }
    if (((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) &&
       (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar8 = *param_1;
      bVar7 = *pbVar1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 != bVar8) goto LAB_02326c04;
    }
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    FUN_016e49e4(&local_48,param_2,*param_3 == 1);
    uVar5 = FUN_0277e788(&local_48);
    puVar3 = PTR_DAT_04bb43c0;
    if ((uVar5 & 1) != 0) {
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_48);
      lVar11 = *(long *)puVar3;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_50 = 0;
          local_58 = (undefined4)local_48;
          uStack_54 = local_48._4_4_;
          uVar4 = FUN_0277d6c4(&local_58);
          if (*(long *)puVar3 == 0) {
LAB_02326c24:
            uVar6 = 0xbc;
          }
          else {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0))
            goto LAB_02326c24;
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(&local_48);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
               (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
               puVar9 == (uint *)0x0)) goto LAB_02326c24;
            uVar6 = 0;
            uVar4 = *puVar9;
            if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
              puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
              uVar6 = 0;
              if (*puVar10 != 0) {
                uVar4 = puVar10[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar10 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
                  if (lVar11 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar4);
                    }
                    if (*puVar10 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
                    goto LAB_02326c30;
                  }
                }
                uVar6 = 0;
              }
            }
          }
LAB_02326c30:
          if ((uVar6 == 0x86) && (*param_3 != 1)) {
            uVar4 = FUN_0267ba70(param_1,&local_48);
            goto LAB_02326c08;
          }
        }
      }
      uVar4 = FUN_02677890(param_1,&local_48);
      goto LAB_02326c08;
    }
  }
LAB_02326c04:
  uVar4 = 1;
LAB_02326c08:
  return uVar4 & 1;
}

