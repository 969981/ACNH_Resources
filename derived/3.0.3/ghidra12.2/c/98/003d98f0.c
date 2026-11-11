
uint FUN_003d98f0(long param_1,long param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_60;
  int local_58;
  
  uVar6 = param_4;
  if (param_4 < 2) {
    uVar6 = 1;
  }
  ppuVar17 = (undefined **)PTR_LOOP_04c11a80;
  if ((undefined **)PTR_LOOP_04c11a80 != &PTR_LOOP_04c11a78) {
    do {
      ppuVar16 = ppuVar17 + -1;
      iVar4 = (**(code **)(*ppuVar16 + 0x20))(ppuVar16);
      if ((iVar4 == param_3) && (uVar5 = (**(code **)(*ppuVar16 + 0x28))(ppuVar16), uVar5 == uVar6))
      {
        plVar7 = *(long **)(param_1 + 0x3600);
        *(undefined ***)(param_1 + 0x3608) = ppuVar16;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)(**(code **)(*ppuVar16 + 0x10))(ppuVar16);
          *(long **)(param_1 + 0x3600) = plVar7;
          uVar6 = 0;
          if (plVar7 == (long *)0x0) goto LAB_003d9bd0;
        }
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_70,*(undefined8 *)(param_1 + 0x28));
        if ((uVar8 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          *(uint *)(param_1 + 0x50) = local_70;
          *(uint *)(*(long *)(param_1 + 0x30) + 0x60) = local_70;
          **(undefined4 **)(param_1 + 0x30) = 1;
          *(undefined4 *)(*(long *)(param_1 + 0x30) + 4) = local_6c;
          uVar1 = 0;
          if (*(char *)(param_1 + 0x57) != '\0') {
            uVar1 = *(undefined1 *)(param_1 + 0x56);
          }
          *(undefined1 *)(*(long *)(param_1 + 0x30) + 8) = uVar1;
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10) = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18) = *(undefined8 *)(param_1 + 0x68);
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20) = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28) = *(undefined8 *)(param_1 + 0x68);
          *(long *)(*(long *)(param_1 + 0x30) + 0x38) = (long)local_68;
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40) = local_60;
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48) =
               *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
          *(long *)(*(long *)(param_1 + 0x30) + 0x58) = (long)local_58;
          lVar10 = *(long *)(param_1 + 0x30);
          uVar8 = 0;
          if (*(ulong *)(lVar10 + 0x38) != 0) {
            uVar8 = (*(long *)(lVar10 + 0x18) - 1U) / *(ulong *)(lVar10 + 0x38);
          }
          *(int *)(param_1 + 0x314) = (int)uVar8;
          if (*(char *)(lVar10 + 8) == '\0') {
            *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar10 + 0x38);
          }
          else {
            *(ulong *)(lVar10 + 0x50) =
                 *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x38) * (uVar8 & 0xffffffff);
          }
          if (local_70 != 0) {
            memset((void *)(param_2 + 0x20),0,(ulong)local_70 << 3);
          }
          lVar10 = *(long *)(param_1 + 0x30);
          uVar12 = *(ulong *)(lVar10 + 0x10);
          uVar14 = *(ulong *)(lVar10 + 0x38);
          uVar8 = 0;
          if (uVar14 != 0) {
            uVar8 = uVar12 / uVar14;
          }
          uVar9 = (undefined4)uVar8;
          lVar13 = uVar12 - (uVar8 & 0xffffffff) * uVar14;
          if (*(char *)(lVar10 + 8) != '\0') {
            lVar11 = *(long *)(lVar10 + 0x18);
            if (0 < lVar13) {
              lVar13 = uVar14 - lVar13;
              lVar11 = lVar11 + lVar13;
              *(ulong *)(lVar10 + 0x10) = lVar13 + uVar12;
              *(long *)(*(long *)(param_1 + 0x30) + 0x50) =
                   *(long *)(*(long *)(param_1 + 0x30) + 0x50) + lVar13;
              lVar10 = *(long *)(param_1 + 0x30);
              uVar12 = *(ulong *)(lVar10 + 0x10);
            }
            *(ulong *)(lVar10 + 0x10) = uVar12 + *(long *)(lVar10 + 0x58);
            lVar10 = *(long *)(param_1 + 0x30);
            *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + *(long *)(lVar10 + 0x58);
            lVar10 = *(long *)(param_1 + 0x30);
            lVar13 = *(long *)(lVar10 + 0x58);
            puVar15 = (ulong *)(lVar10 + 0x50);
            uVar12 = *puVar15;
            uVar8 = *(ulong *)(lVar10 + 0x38);
            if (uVar8 < uVar12) {
              do {
                *puVar15 = uVar12 - uVar8;
                lVar10 = *(long *)(param_1 + 0x30);
                puVar15 = (ulong *)(lVar10 + 0x50);
                uVar12 = *puVar15;
                uVar8 = *(ulong *)(lVar10 + 0x38);
              } while (uVar8 < uVar12);
            }
            uVar9 = 0;
            if (uVar8 != 0) {
              uVar9 = (undefined4)(((lVar11 + lVar13) - 1U) / uVar8);
            }
            *(undefined4 *)(param_1 + 0x314) = uVar9;
            uVar12 = *(ulong *)(lVar10 + 0x38);
            uVar8 = 0;
            if (uVar12 != 0) {
              uVar8 = *(ulong *)(lVar10 + 0x10) / uVar12;
            }
            uVar9 = (undefined4)uVar8;
            lVar13 = *(ulong *)(lVar10 + 0x10) - (uVar8 & 0xffffffff) * uVar12;
          }
          *(undefined4 *)(param_1 + 0x318) = uVar9;
          *(long *)(param_1 + 0x330) = lVar13;
          *(undefined1 *)(lVar10 + 0x31) = 0;
          uVar6 = FUN_003dbd14(param_1 + 0x340,param_1,*(undefined8 *)(param_1 + 0x30));
        }
        goto LAB_003d9bd0;
      }
      ppuVar16 = ppuVar17 + 1;
      ppuVar17 = (undefined **)*ppuVar16;
    } while ((undefined **)*ppuVar16 != &PTR_LOOP_04c11a78);
  }
  pcVar2 = "HardwareOpusDecoder";
  if (uVar6 != 2) {
    pcVar2 = "Decoder";
  }
  pcVar3 = "OpusDecoder";
  if (1 < param_4) {
    pcVar3 = pcVar2;
  }
  nn::util::SNPrintf((char *)&local_70,0x20,pcVar3);
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x3608) = 0;
LAB_003d9bd0:
  return uVar6 & 1;
}

