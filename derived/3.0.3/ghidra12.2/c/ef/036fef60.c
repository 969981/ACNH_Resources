
bool FUN_036fef60(long param_1,uint *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  
  uVar3 = *param_2;
  if ((int)*(uint *)(param_1 + 0xb20) < 1) {
    if (*(long *)(param_1 + 0xa10) == 0) {
      return false;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0xa10) + 8);
    if (puVar5 == (uint *)0x0) {
      return false;
    }
    if ((uVar3 < *(uint *)(param_1 + 0xa28)) &&
       (*(char *)(*(long *)(param_1 + 0xa30) + (long)(int)uVar3) == '\0')) {
      return false;
    }
    if (*puVar5 <= uVar3) {
      return false;
    }
    if (puVar5[1] == 0) {
      return false;
    }
    if ((ushort)puVar5[2] == 0) {
      return false;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * uVar3 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(param_1 + 0xb20) <= uVar3) {
      return false;
    }
    if (*(uint *)(param_1 + 0xb10) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0xb18) + (ulong)uVar3 * 8);
  }
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return false;
  }
  cVar7 = DAT_05ab9860;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      DAT_05ab9864 = 0xffffffffffffffff;
      DAT_05ab986c = 0xffffffffffffffff;
      DAT_05ab9860 = '\x01';
      DAT_05ab9874 = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_05ab9874) {
        pcVar1 = (char *)((DAT_05ab9874 & 0xffffffff) + (long)puVar5);
        if (pcVar1 == (char *)0x0) {
          return false;
        }
        return *pcVar1 != '\0';
      }
      if ((int)DAT_05ab9874 != -1) {
        return false;
      }
    }
    puVar8 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return false;
    }
    if (puVar5 == puVar8) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar5 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) {
      return false;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    DAT_05ab9874 = CONCAT44(DAT_05ab9874._4_4_,0xfffffffe);
    if (uVar9 == 0) {
      return false;
    }
    piVar4 = (int *)(lVar2 + 4);
    while (piVar4[-1] != 0x4f0b2be7) {
      piVar4 = piVar4 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return false;
      }
    }
    iVar6 = 0;
    if (*piVar4 != -1) {
      iVar6 = *piVar4;
    }
    DAT_05ab9874 = CONCAT44(DAT_05ab9874._4_4_,iVar6);
    if (*puVar5 == 0) {
      return false;
    }
  }
  return false;
}

