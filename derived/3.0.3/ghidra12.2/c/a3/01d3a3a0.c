
int FUN_01d3a3a0(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long local_50;
  uint local_48;
  uint local_44;
  
  uVar7 = (ulong)(int)param_2[1];
  if ((int)param_2[1] < *(int *)((long)param_2 + 0xc)) {
    while (*(byte *)(*param_2 + uVar7) < 0x21 &&
           (1L << ((ulong)*(byte *)(*param_2 + uVar7) & 0x3f) & 0x100002600U) != 0) {
      uVar7 = uVar7 + 1;
      if (*(int *)((long)param_2 + 0xc) == (int)uVar7) {
        return -1;
      }
    }
    iVar6 = (int)uVar7;
    if (-1 < iVar6) {
      local_50 = *param_2;
      uVar4 = (ulong)param_2[1] >> 0x20;
      local_44 = (uint)((ulong)param_2[1] >> 0x20);
      if (((iVar6 < (int)local_44) && (*(char *)(local_50 + (uVar7 & 0xffffffff)) == '[')) &&
         (local_48 = iVar6 + 1, (int)local_48 < (int)local_44)) {
        iVar6 = 0;
        while( true ) {
          pbVar5 = (byte *)(local_50 + (ulong)local_48);
          while (*pbVar5 < 0x21 && (1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0) {
            local_48 = local_48 + 1;
            pbVar5 = pbVar5 + 1;
            if ((uint)uVar4 == local_48) {
              return -1;
            }
          }
          if ((int)local_48 < 0) {
            return -1;
          }
          uVar3 = (**(code **)*param_1)(param_1,iVar6,&local_50);
          if ((int)uVar3 < 0) {
            return -1;
          }
          uVar4 = (ulong)local_44;
          if ((int)local_44 <= (int)uVar3) {
            return -1;
          }
          lVar8 = 0;
          iVar6 = iVar6 + 1;
          while (bVar1 = *(byte *)(local_50 + (ulong)uVar3 + lVar8),
                bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
            lVar8 = lVar8 + 1;
            if ((uVar3 - local_44) + (int)lVar8 == 0) {
              return -1;
            }
          }
          uVar7 = (ulong)uVar3 + lVar8;
          iVar9 = (int)uVar7;
          if (iVar9 < 0) {
            return -1;
          }
          if ((int)local_44 <= iVar9) {
            return -1;
          }
          cVar2 = *(char *)(local_50 + (uVar7 & 0xffffffff));
          if (cVar2 != ',') break;
          local_48 = uVar3 + (int)lVar8 + 1;
          if ((int)local_44 <= (int)local_48) {
            return -1;
          }
        }
        if (cVar2 == ']') {
          uVar3 = uVar3 + 1;
        }
        iVar6 = uVar3 + (int)lVar8;
        if (cVar2 != ']') {
          iVar6 = -1;
        }
        return iVar6;
      }
    }
  }
  return -1;
}

