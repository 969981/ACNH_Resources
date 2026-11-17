
uint FUN_02aee190(long param_1)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  ulong uVar6;
  char *pcVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined *local_68;
  char *local_60;
  undefined *local_58;
  char *local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bb2020;
  puVar5 = *(uint **)(param_1 + 8);
  uVar6 = 0;
  if (puVar5 != (uint *)0x0) {
    uVar10 = *puVar5;
    if (uVar10 != 0 && puVar5 != (uint *)(ulong)uVar10) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar10);
      if (((*puVar8 != 0) && (uVar10 = puVar8[1], uVar10 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar11 = 0;
          if ((ulong)uVar10 != 0) {
            uVar11 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar10);
          }
          if (*puVar8 <= uVar11) {
            uVar11 = 0xffffffff;
          }
          if ((uVar11 < DAT_0560b688) &&
             (uVar2 = *(ushort *)(DAT_0560b690 + (long)(int)uVar11 * 2), uVar6 = (ulong)uVar2,
             uVar2 < 5)) goto LAB_02aee238;
        }
      }
    }
    uVar6 = 0;
  }
LAB_02aee238:
  local_58._0_4_ = (uint)uVar6;
  if ((uint)local_58 < 5) {
    local_50 = (&PTR_s_Invalid_04a9d8c0)[uVar6];
  }
  else {
    local_50 = "";
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_48 = FUN_006bd550(local_50,0);
  puVar4 = PTR_DAT_04bb4a60;
  uVar10 = 0;
  do {
    local_60 = "";
    if (uVar10 < 0x1c) {
      local_60 = *(char **)(puVar4 + (ulong)uVar10 * 8 + 0x110);
    }
    local_68 = puVar3 + 0x10;
    (**(code **)(local_58 + 0x18))(&local_58);
    (**(code **)(local_58 + 0x18))(&local_58);
    pcVar7 = local_50;
    (**(code **)(local_68 + 0x18))(&local_68);
    if (pcVar7 == local_60) {
      return uVar10;
    }
    if (*local_50 == *local_60) {
      if (*local_50 == '\0') {
        return uVar10;
      }
      lVar9 = 0x7fffe;
      pcVar7 = local_50;
      while( true ) {
        if (pcVar7[1] != local_60[1]) break;
        if (pcVar7[1] == '\0') {
          return uVar10;
        }
        if (pcVar7[2] != local_60[2]) break;
        if (pcVar7[2] == '\0') {
          return uVar10;
        }
        if ((lVar9 == 0) || (cVar1 = pcVar7[3], cVar1 != local_60[3])) break;
        lVar9 = lVar9 + -3;
        local_60 = local_60 + 3;
        pcVar7 = pcVar7 + 3;
        if (cVar1 == '\0') {
          return uVar10;
        }
      }
    }
    uVar11 = 0x1c;
    if ((int)uVar10 < 0x1c) {
      uVar11 = uVar10 + 1;
    }
    uVar10 = uVar11;
    if (uVar11 == 0x1c) {
      return 0;
    }
  } while( true );
}

