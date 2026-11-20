
/* WARNING: Type propagation algorithm not settling */

long FUN_03d54360(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pbVar7 = (byte *)param_2[1];
  uVar4 = (uint)*pbVar7;
  if (*pbVar7 != 0) {
    uVar5 = 0xffffffff;
    do {
      pbVar7 = pbVar7 + 1;
      uVar5 = crc32b(uVar5,uVar4,0x4c11db7);
      uVar4 = (uint)*pbVar7;
    } while (uVar4 != 0);
    uVar4 = ~uVar5;
  }
  uVar5 = *(uint *)(param_1 + 0xf0);
  if (uVar5 != 0) {
    uVar6 = 0;
    iVar10 = uVar5 - 1;
    if (iVar10 == 0 || (int)uVar5 < 1) {
      lVar9 = *(long *)(param_1 + 0xf8);
    }
    else {
      lVar9 = *(long *)(param_1 + 0xf8);
      do {
        iVar1 = iVar10 + uVar6;
        if (iVar1 < 0 != SCARRY4(iVar10,uVar6)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        plVar11 = *(long **)(lVar9 + (long)(int)uVar2 * 8);
        if (*(uint *)(plVar11 + 0x13) == uVar4) goto joined_r0x03d54464;
        if (*(uint *)(plVar11 + 0x13) < uVar4) {
          uVar6 = uVar2 + 1;
        }
        else {
          iVar10 = uVar2 - 1;
        }
      } while ((int)uVar6 < iVar10);
    }
    plVar11 = *(long **)(lVar9 + (long)(int)uVar6 * 8);
    uVar2 = uVar6;
    if (*(uint *)(plVar11 + 0x13) == uVar4) {
joined_r0x03d54464:
      if ((uVar2 < uVar5) && (uVar4 = *(uint *)((long)plVar11 + 0x9c), -1 < (int)uVar4)) {
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = param_2[1];
        (**(code **)(*plVar11 + 0x18))(plVar11);
        if (lVar9 == plVar11[1]) {
LAB_03d544f8:
          if (*(uint *)(param_1 + 0x38) <= uVar4) {
            uVar4 = 0;
          }
          return *(long *)(param_1 + 0x40) + (ulong)uVar4 * 0x10;
        }
        uVar8 = 0;
        bVar3 = true;
        while (*(char *)(param_2[1] + uVar8) == *(char *)(plVar11[1] + uVar8)) {
          if (*(char *)(param_2[1] + uVar8) == '\0') {
            if (!bVar3) {
              return 0;
            }
            goto LAB_03d544f8;
          }
          bVar3 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
          if (uVar8 == 0x80001) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

