
/* WARNING: Type propagation algorithm not settling */

void FUN_002b1020(undefined8 param_1,long *param_2,uint *param_3,void *param_4,uint param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 uVar5;
  void *__src;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  int *piVar13;
  int iVar14;
  undefined4 local_ac [8];
  int local_8c;
  ErrorResultVariant aEStack_88 [28];
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if ((int)param_2[0xc9] == DAT_0411003c) {
LAB_002b1058:
    local_8c = 0x10c08;
  }
  else {
    if ((param_4 != (void *)0x0) || (param_5 == 0)) {
      uVar7 = FUN_002aed20(param_2);
      if ((uVar7 & 1) == 0) goto LAB_002b1058;
      if ((*param_3 != 0) && (param_2[0xca] != 0)) {
        if (param_5 == 0) {
          uVar9 = 1;
          if (*(uint *)(param_2 + 5) != (uint)*(ushort *)((long)param_2 + 0x32)) goto LAB_002b1134;
        }
        else {
          uVar9 = 0;
          if (*(ushort *)(param_2 + 0xcc) != 0) {
            uVar9 = (param_5 - 1) / (uint)*(ushort *)(param_2 + 0xcc);
          }
          uVar9 = uVar9 + 1;
          if (uVar9 <= (int)param_2[5] - (uint)*(ushort *)((long)param_2 + 0x32)) {
LAB_002b1134:
            memset(&local_64,0,4);
            uVar7 = (ulong)local_64;
            lVar8 = 0;
            do {
              if ((param_2[lVar8 + 0xa7] != 0) &&
                 (uVar4 = 1 << (ulong)((uint)lVar8 & 0x1f), (*param_3 & uVar4) != 0)) {
                local_64 = (uint)uVar7 | uVar4;
                uVar7 = (ulong)local_64;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0x20);
            if (0 < (int)uVar9) {
              iVar14 = 0;
              do {
                uVar4 = *(int *)((long)param_2 + 0x2c) + (uint)*(ushort *)((long)param_2 + 0x32);
                lVar8 = param_2[4];
                uVar2 = 0;
                if (*(uint *)(param_2 + 5) <= uVar4) {
                  uVar2 = *(uint *)(param_2 + 5);
                }
                uVar7 = (ulong)(uVar4 - uVar2);
                puVar12 = (undefined2 *)(lVar8 + uVar7 * 0x5d0);
                *puVar12 = 0;
                *(undefined8 *)(puVar12 + 4) = 0;
                piVar13 = (int *)(puVar12 + 8);
                piVar13[0] = 0;
                piVar13[1] = 0;
                pbVar11 = (byte *)(puVar12 + 0x10);
                pbVar11[0] = 0;
                pbVar11[1] = 0;
                pbVar11[2] = 0;
                pbVar11[3] = 0;
                pbVar11[4] = 0;
                pbVar11[5] = 0;
                pbVar11[6] = 0;
                pbVar11[7] = 0;
                pbVar10 = (byte *)(puVar12 + 0x14);
                *pbVar10 = 0;
                memset(puVar12 + 0x16,0,4);
                *(undefined1 *)puVar12 = 0;
                *pbVar11 = 1;
                uVar3 = *(ushort *)((long)param_2 + 0x32);
                uVar5 = (undefined2)
                        ((ulong)((uint)uVar3 + (uint)*(ushort *)(param_2 + 6)) * 0x200020003 >> 0x21
                        );
                puVar12[0x12] = uVar5;
                *(ushort *)((long)param_2 + 0x32) = uVar3 + 1;
                if (param_6 != (undefined2 *)0x0) {
                  *param_6 = uVar5;
                }
                uVar4 = param_5;
                if (*(ushort *)(param_2 + 0xcc) <= param_5) {
                  uVar4 = (uint)*(ushort *)(param_2 + 0xcc);
                }
                __src = param_4;
                uVar2 = uVar4;
                if ((*(char *)((long)param_2 + 0x6ac) != '\0') &&
                   (FUN_002aa4a8(&local_8c,param_2[0xca],param_4), local_8c == 0)) {
                  *pbVar11 = *pbVar11 | 0x10;
                  __src = *(void **)(param_2[0xca] + 0x960);
                  uVar2 = *(uint *)(param_2[0xca] + 0x968);
                }
                if (iVar14 == 0) {
                  *pbVar11 = *pbVar11 | 2;
                }
                if (uVar9 + iVar14 == 1) {
                  *pbVar11 = *pbVar11 | 4;
                }
                puVar12[0x11] = (short)uVar2;
                *(uint *)(puVar12 + 0x16) = local_64;
                bVar6 = (**(code **)(*param_2 + 0x38))(param_2);
                *pbVar10 = bVar6;
                uVar1 = bVar6 + 0x1f >> 3 & 0x3c;
                if ((uVar2 & 0xffff) <= 0x597 - uVar1) {
                  memcpy((void *)(lVar8 + uVar7 * 0x5d0 + (ulong)(uVar1 + 9) + 0x30),__src,
                         (ulong)uVar2 & 0xffff);
                }
                memcpy(&local_68,&local_64,4);
                local_68 = local_68 & *(uint *)(param_2 + 0xce);
                if ((iVar14 == 0) && (local_68 != 0)) {
                  memcpy(&local_6c,&local_64,4);
                  *(uint *)(param_2 + 0xce) = *(uint *)(param_2 + 0xce) & (local_6c ^ 0xffffffff);
                  *pbVar11 = *pbVar11 | 8;
                  local_6c = ~local_6c;
                  sprintf((char *)&local_8c,"%08x",(ulong)local_64);
                  sprintf((char *)local_ac,"%08x",(ulong)*(uint *)(param_2 + 0xce));
                }
                param_4 = (void *)((long)param_4 + (ulong)(ushort)uVar4);
                iVar14 = iVar14 + -1;
                *(undefined1 *)puVar12 = 1;
                param_5 = param_5 - (uVar4 & 0xffff);
                *piVar13 = (uVar2 & 0xffff) + (*pbVar10 + 0x1f >> 3 & 0x3c) + 9;
              } while (uVar9 + iVar14 != 0);
              uVar7 = (ulong)local_64;
            }
            sprintf((char *)&local_8c,"%08x",uVar7);
            if (((int)param_2[0xd3] == 0) && (0x18 < param_5 >> 0xc)) {
              lVar8 = *DAT_04c61168;
              *(uint *)(param_2 + 0xd3) = param_5;
              param_2[0xd4] = lVar8;
              *(undefined2 *)((long)param_2 + 0x69c) = *param_6;
            }
            local_8c = 0;
            goto LAB_002b1098;
          }
        }
        local_8c = 0x4c0d;
        goto LAB_002b1098;
      }
    }
    local_8c = 0x10c07;
  }
LAB_002b1098:
  local_ac[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_88,(Result *)local_ac);
  FUN_002296c4(param_1,&local_8c);
  return;
}

