
void FUN_029aabe0(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_28 [4];
  byte local_24 [4];
  
  lVar7 = DAT_055f6860;
  if ((*(long *)PTR_DAT_04bb4938 != 0) && (*(short *)(*(long *)PTR_DAT_04bb4938 + 0x4c) != -2)) {
    uVar5 = FUN_0277d6c4();
    lVar7 = *(long *)(lVar7 + 0x19f800);
    if (lVar7 != 0) {
      do {
        while ((uint)*(ushort *)(lVar7 + 0x20) <= (uVar5 & 0xffff)) {
          if ((uVar5 & 0xffff) <= (uint)*(ushort *)(lVar7 + 0x20)) {
            iVar2 = *(int *)(lVar7 + 0x24);
            if (iVar2 == 0) {
              return;
            }
            if (DAT_04cd19d8 == 0) {
              pbVar6 = &DAT_0548e140;
LAB_029aacd4:
              if (*pbVar6 < 8) goto LAB_029aad4c;
LAB_029aace0:
              if (DAT_0537d558 == (long *)0x0) {
LAB_029aad44:
                pbVar6 = &DAT_0548e168;
                goto LAB_029aad4c;
              }
              lVar7 = *DAT_0537d558;
              bVar4 = *(byte *)(lVar7 + 0x473);
              pbVar6 = PTR_DAT_04bb5038;
              if ((long)(char)bVar4 != 0xffffffffffffffff) {
                puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
                if (7 < bVar4) {
                  puVar1 = (uint *)(lVar7 + 0x48);
                }
                if ((*puVar1 & 8) != 0) {
                  pbVar6 = (byte *)(lVar7 + 0x471);
                }
              }
              local_24[0] = *pbVar6;
              if (7 < local_24[0]) goto LAB_029aad44;
            }
            else {
              pbVar6 = PTR_DAT_04bb32e0;
              if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
                pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
              }
              if (7 < *pbVar6) {
                if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
                  pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
                  goto LAB_029aacd4;
                }
                goto LAB_029aace0;
              }
LAB_029aad4c:
              local_24[0] = *pbVar6;
              if (7 < local_24[0]) goto LAB_029aad84;
            }
            local_28[0] = local_24[0];
            uVar5 = FUN_02669430(local_28);
            if ((uVar5 & 1) != 0) {
              uVar5 = FUN_02582fe0(local_24);
            }
LAB_029aad84:
            if (*(int *)(param_1 + 0x27b0) == 0) {
              uVar3 = *(uint *)(param_1 + 0x50);
              if (*(uint *)(param_1 + 0x98) <= uVar3) {
                uVar3 = 0;
              }
              lVar7 = *(long *)(param_1 + 0xa0) + (long)(int)uVar3 * 400;
              *(int *)(lVar7 + 0x138) = iVar2;
              *(uint *)(lVar7 + 0x134) = uVar5;
              *(undefined2 *)(lVar7 + 0x131) = 0x101;
              *(undefined8 *)(lVar7 + 0x140) = 0xffffffffffffffff;
              *(byte *)(lVar7 + 0x130) = *(byte *)(lVar7 + 0x130) | 1;
            }
            if (*(int *)(param_1 + 0x27bc) != 0) {
              return;
            }
            uVar3 = *(uint *)(param_1 + 0x54);
            if (*(uint *)(param_1 + 0x98) <= uVar3) {
              uVar3 = 0;
            }
            lVar7 = *(long *)(param_1 + 0xa0) + (long)(int)uVar3 * 400;
            *(int *)(lVar7 + 0x138) = iVar2;
            *(uint *)(lVar7 + 0x134) = uVar5;
            *(undefined2 *)(lVar7 + 0x131) = 0x101;
            *(undefined8 *)(lVar7 + 0x140) = 0xffffffffffffffff;
            *(byte *)(lVar7 + 0x130) = *(byte *)(lVar7 + 0x130) | 1;
            return;
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
        }
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != 0);
    }
  }
  return;
}

