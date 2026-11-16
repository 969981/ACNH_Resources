
void FUN_027ddea0(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  undefined *puVar16;
  ulong uVar17;
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  cVar11 = *(char *)(param_1 + 0x1e3366);
  if (cVar11 < '\0') {
    if (*(char *)(param_1 + 0x1e3363) == -1) {
      return;
    }
    if ((param_2 & 1) != 0) {
      return;
    }
  }
  else {
    uVar8 = FUN_027e09dc(param_1,param_2 & 1);
    if ((uVar8 & 1) == 0) {
      if ((param_2 & 1) == 0) {
        FUN_021a9828(&DAT_053fe348);
        return;
      }
      return;
    }
    cVar11 = *(char *)(param_1 + 0x1e3366);
  }
  iVar4 = (int)cVar11;
  iVar5 = 0;
  if (iVar4 + 1U < 3) {
    iVar5 = iVar4 + 1;
  }
  iVar12 = iVar4;
  if ((param_2 & 1) == 0) {
    iVar12 = 3;
  }
  FUN_0252d11c(local_74);
  if (local_74[0] < 8) {
    if (((param_2 & 1) == 0) || (iVar5 != iVar4)) {
      if ((param_2 & 1) == 0) {
        uVar8 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        puVar16 = PTR_DAT_04bc27f0;
        do {
          if ((uVar8 < 3) && (uVar17 = (ulong)*(byte *)(param_1 + 0x1e3363 + uVar8), uVar17 < 10)) {
            pbVar15 = (byte *)(param_1 + uVar17 * 0x13230);
            uVar13 = (ulong)*pbVar15;
            if ((uVar13 < 0x23) &&
               ((pbVar15[1] <= (byte)puVar16[uVar13] &&
                ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(pbVar15[1] & 0x1f) & 1) != 0))
               )) {
              pcStack_68 = "ForceMoveOut";
              local_70 = puVar1;
              iVar5 = FUN_02749340(param_1 + uVar17 * 0x13230 + 0x1267c,&local_70);
              if (iVar5 == 0) {
                bVar14 = local_74[0];
                if (7 < local_74[0]) {
                  bVar14 = 0xff;
                }
                local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar14);
                lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_70,1);
                if (lVar9 == 0) {
LAB_027de180:
                  *(char *)(param_1 + 0x1e3366) = (char)uVar8;
                  bVar14 = *(byte *)(param_1 + 0x1e3363 + uVar8);
                  uVar6 = (uint)bVar14;
                  if (9 < bVar14) {
                    uVar6 = 0xffffffff;
                  }
                  lVar9 = param_1 + (ulong)uVar6 * 0x13230;
                  if (9 < uVar6) {
                    lVar9 = param_1;
                  }
                  FUN_0269175c(lVar9);
                  FUN_021a9828(&DAT_053fe348);
                  return;
                }
                if ((*(long **)(lVar9 + 0x17bb0) == (long *)0x0) ||
                   (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x17bb0),
                   puVar10 == (undefined8 *)0x0)) {
                  uVar6 = 1;
                }
                else {
                  uVar6 = (**(code **)*puVar10)();
                  uVar6 = uVar6 ^ 1;
                }
                uVar7 = FUN_026b318c(pbVar15,*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90)
                                             + 0x1c);
                if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x17bb0) != 0)) &&
                   (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x17bb0) + 8),
                   puVar10 != (undefined8 *)0x0)) {
                  (**(code **)*puVar10)();
                }
                puVar16 = PTR_DAT_04bc27f0;
                if ((int)uVar7 < 0) goto LAB_027de180;
                lVar9 = param_1 + uVar17 * 0x13230 + 4;
                lVar2 = lVar9 + (ulong)uVar7 * 0x5f0;
                if (7 < uVar7) {
                  lVar2 = lVar9;
                }
                local_70 = PTR_DAT_04bb2020 + 0x10;
                pcStack_68 = "TalkDIY";
                iVar5 = FUN_02746e10(lVar2 + 0x38,&local_70);
                if (iVar5 == 0) goto LAB_027de180;
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
      }
      else {
        do {
          uVar8 = FUN_027e0ce8(param_1,iVar5,local_74);
          if ((uVar8 & 1) != 0) {
            return;
          }
          iVar3 = 0;
          if (iVar5 + 1U < 3) {
            iVar3 = iVar5 + 1;
          }
          iVar5 = iVar3;
        } while (iVar3 != iVar12);
      }
    }
    if (((param_2 & 1) == 0) || (uVar8 = FUN_027e0ce8(param_1,iVar4,local_74), (uVar8 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x1e3366) = 0xff;
    }
  }
  return;
}

