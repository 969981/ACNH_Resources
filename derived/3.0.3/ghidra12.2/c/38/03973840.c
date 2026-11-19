
void FUN_03973840(byte *param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  char *__s;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  char *__s_00;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  undefined **local_78;
  char *local_70;
  int local_64;
  
  lVar9 = *(long *)(param_2 + 0x20);
  if (lVar9 != 0) {
    *(long *)param_1 = param_2;
    uVar8 = (ulong)*(byte *)(param_3 + 0xed);
    if (*(byte *)(param_3 + 0xed) != 0) {
      uVar10 = 0;
      do {
        lVar13 = *(long *)(lVar9 + 0x28);
        if (*(long *)(param_3 + 0x40) == 0) {
          if (lVar13 != 0) {
            __s_00 = (char *)0x0;
            sVar5 = 0;
            goto LAB_0397391c;
          }
        }
        else if (lVar13 != 0) {
          __s_00 = (char *)(*(long *)(*(long *)(param_3 + 0x40) + uVar10 * 0x10 + 0x20) + 2);
          sVar5 = strlen(__s_00);
LAB_0397391c:
          uVar6 = (ulong)*(ushort *)(lVar13 + 0xc);
          puVar12 = (uint *)((int *)(lVar13 + 8) + uVar6 * 4);
          uVar11 = *puVar12;
          if (*(int *)(lVar13 + 8) < (int)*puVar12) {
            do {
              uVar7 = (long)((ulong)uVar11 << 0x20) >> 0x23;
              if (uVar7 < sVar5) {
                uVar7 = (ulong)((byte)__s_00[sVar5 + ~uVar7] >> ((ulong)uVar11 & 7)) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar6 = (ulong)*(ushort *)(lVar13 + 8 + uVar6 * 0x10 + uVar7 * 2 + 4);
              puVar12 = (uint *)(lVar13 + 8 + uVar6 * 0x10);
              bVar1 = (int)uVar11 < (int)*puVar12;
              uVar11 = *puVar12;
            } while (bVar1);
          }
          if (((sVar5 == **(ushort **)(puVar12 + 2)) &&
              (iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,__s_00,sVar5), iVar4 == 0)) &&
             (uVar6 = (long)puVar12 + (-0x18 - lVar13),
             ((uVar6 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) {
            lVar13 = *(long *)(*(long *)param_1 + 0x48);
            if (lVar13 == 0) {
              uVar11 = 0xffffffff;
            }
            else {
              __s = (char *)(*(long *)(*(long *)(lVar9 + 0x20) + (long)(int)(uVar6 >> 4) * 8) + 2);
              sVar5 = strlen(__s);
              uVar8 = (ulong)*(ushort *)(lVar13 + 0xc);
              puVar12 = (uint *)((int *)(lVar13 + 8) + uVar8 * 4);
              uVar11 = *puVar12;
              if (*(int *)(lVar13 + 8) < (int)*puVar12) {
                do {
                  uVar6 = (long)((ulong)uVar11 << 0x20) >> 0x23;
                  if (uVar6 < sVar5) {
                    uVar6 = (ulong)((byte)__s[sVar5 + ~uVar6] >> ((ulong)uVar11 & 7)) & 1;
                  }
                  else {
                    uVar6 = 0;
                  }
                  uVar8 = (ulong)*(ushort *)(lVar13 + 8 + uVar8 * 0x10 + uVar6 * 2 + 4);
                  puVar12 = (uint *)(lVar13 + 8 + uVar8 * 0x10);
                  bVar1 = (int)uVar11 < (int)*puVar12;
                  uVar11 = *puVar12;
                } while (bVar1);
              }
              uVar11 = 0xffffffff;
              if (sVar5 == **(ushort **)(puVar12 + 2)) {
                iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,__s,sVar5);
                uVar11 = 0xffffffff;
                if (iVar4 == 0) {
                  uVar11 = (uint)((ulong)((long)puVar12 + (-0x18 - lVar13)) >> 4);
                }
              }
            }
            local_64 = -1;
            local_78 = &PTR_LAB_048f9770;
            local_70 = __s_00;
            FUN_03973de0(&local_64,param_3,param_4,&local_78);
            if (local_64 != -1) {
              uVar2 = *(uint *)(param_1 + 0x408);
              uVar8 = (ulong)uVar2;
              if (0 < (int)uVar2) {
                pbVar3 = param_1;
                do {
                  if ((uVar11 == pbVar3[0x20]) && (*(int *)(pbVar3 + 8) == local_64))
                  goto LAB_039738cc;
                  uVar8 = uVar8 - 1;
                  pbVar3 = pbVar3 + 0x20;
                } while (uVar8 != 0);
              }
              *(int *)(param_1 + (long)(int)uVar2 * 0x20 + 8) = local_64;
              *(char **)(param_1 + (long)(int)uVar2 * 0x20 + 8 + 0x10) = local_70;
              iVar4 = *(int *)(param_1 + 0x408);
              *(int *)(param_1 + 0x408) = iVar4 + 1;
              param_1[(long)iVar4 * 0x20 + 0x20] = (byte)uVar11;
            }
LAB_039738cc:
            uVar8 = (ulong)*(byte *)(param_3 + 0xed);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
  }
  return;
}

