
int FUN_01d39d40(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined **local_190;
  undefined *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  undefined1 local_174 [255];
  undefined1 local_75;
  long local_70;
  uint local_68;
  uint local_64;
  
  uVar8 = (ulong)(int)param_2[1];
  if ((int)param_2[1] < *(int *)((long)param_2 + 0xc)) {
    while (*(byte *)(*param_2 + uVar8) < 0x21 &&
           (1L << ((ulong)*(byte *)(*param_2 + uVar8) & 0x3f) & 0x100002600U) != 0) {
      uVar8 = uVar8 + 1;
      if (*(int *)((long)param_2 + 0xc) == (int)uVar8) {
        return -1;
      }
    }
    iVar6 = (int)uVar8;
    if (-1 < iVar6) {
      local_70 = *param_2;
      uVar5 = (ulong)param_2[1] >> 0x20;
      local_64 = (uint)((ulong)param_2[1] >> 0x20);
      if (((iVar6 < (int)local_64) && (*(char *)(local_70 + (uVar8 & 0xffffffff)) == '{')) &&
         (local_68 = iVar6 + 1, (int)local_68 < (int)local_64)) {
        puVar1 = PTR_DAT_04bb21f8 + 0x10;
        while( true ) {
          pbVar7 = (byte *)(local_70 + (ulong)local_68);
          while (*pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0) {
            local_68 = local_68 + 1;
            pbVar7 = pbVar7 + 1;
            if ((uint)uVar5 == local_68) {
              return -1;
            }
          }
          if ((int)local_68 < 0) {
            return -1;
          }
          local_178 = 0x100;
          local_75 = 0;
          local_174[0] = 0;
          local_1a0 = local_70;
          uStack_194 = local_64;
          local_190 = &local_188;
          local_188 = puVar1;
          puStack_180 = local_174;
          uStack_198 = local_68;
          uVar4 = FUN_01d3a020(&local_1a0);
          if (((int)uVar4 < 0) || (iVar6 = uVar4 - local_64, (int)local_64 <= (int)uVar4)) break;
          uVar8 = (ulong)uVar4;
          while (*(byte *)(local_70 + uVar8) < 0x21 &&
                 (1L << ((ulong)*(byte *)(local_70 + uVar8) & 0x3f) & 0x100002600U) != 0) {
            uVar8 = uVar8 + 1;
            iVar6 = iVar6 + 1;
            if (local_64 == (uint)uVar8) {
              return -1;
            }
          }
          if ((int)uVar8 < 0) {
            return -1;
          }
          if ((int)local_64 <= (int)uVar8) {
            return -1;
          }
          if (*(char *)(local_70 + (uVar8 & 0xffffffff)) != ':') {
            return -1;
          }
          if ((int)local_64 <= (int)(uVar8 + 1)) {
            return -1;
          }
          uVar8 = uVar8 + 1 & 0xffffffff;
          while (iVar6 = iVar6 + 1,
                *(byte *)(local_70 + uVar8) < 0x21 &&
                (1L << ((ulong)*(byte *)(local_70 + uVar8) & 0x3f) & 0x100002600U) != 0) {
            uVar8 = uVar8 + 1;
            if (iVar6 == -1) {
              return -1;
            }
          }
          local_68 = (uint)uVar8;
          if ((int)local_68 < 0) {
            return -1;
          }
          uVar4 = (**(code **)*param_1)(param_1,&local_188,&local_70);
          if ((int)uVar4 < 0) {
            return -1;
          }
          uVar5 = (ulong)local_64;
          if ((int)local_64 <= (int)uVar4) {
            return -1;
          }
          lVar9 = 0;
          lVar10 = (ulong)uVar4 << 0x20;
          while (bVar2 = *(byte *)(local_70 + (ulong)uVar4 + lVar9),
                bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x100000000;
            if ((uVar4 - local_64) + (int)lVar9 == 0) {
              return -1;
            }
          }
          uVar8 = (ulong)uVar4 + lVar9;
          iVar6 = (int)uVar8;
          if (iVar6 < 0) {
            return -1;
          }
          if ((int)local_64 <= iVar6) {
            return -1;
          }
          if (*(char *)(local_70 + (uVar8 & 0xffffffff)) != ',') {
            bVar3 = *(char *)(local_70 + (lVar10 >> 0x20)) == '}';
            if (bVar3) {
              uVar4 = uVar4 + 1;
            }
            iVar6 = uVar4 + (int)lVar9;
            if (!bVar3) {
              iVar6 = -1;
            }
            return iVar6;
          }
          local_68 = uVar4 + (int)lVar9 + 1;
          if ((int)local_64 <= (int)local_68) {
            return -1;
          }
        }
      }
    }
  }
  return -1;
}

