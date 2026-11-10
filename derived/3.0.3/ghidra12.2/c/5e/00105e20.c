
uint FUN_00105e20(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 auStack_160 [136];
  undefined1 auStack_d8 [24];
  long *local_c0;
  long local_a8;
  undefined2 local_92;
  undefined4 local_48 [2];
  
  uVar3 = *(ushort *)((long)param_2 + 0x72);
  uVar8 = (*(ushort *)((long)param_2 + 0x7c) & 0x7f) + (uVar3 & 0x7f);
  if (0x37 < uVar8) {
    return 0x8c36;
  }
  if (uVar8 == 0) {
    return 0x9b36;
  }
  if ((param_4 & 0xffff) < uVar8 * 2 + 2) {
    return 0x9436;
  }
  uVar8 = uVar3 & 0x7f;
  local_48[0] = 0;
  if ((uVar3 & 0x7f) != 0) {
    if (*(char *)((long)param_2 + 0x74) == '\x02') {
      FUN_00100380(param_3,*param_2,uVar8);
      *(undefined2 *)(param_3 + (ulong)uVar8 * 2) = 0;
      uVar6 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
      iVar7 = (int)uVar6;
      goto joined_r0x00105fcc;
    }
    if (*(char *)((long)param_2 + 0x74) == '\0') {
      sVar5 = FUN_0010b7a0(param_1,param_2,param_3,param_4);
      if (sVar5 < 0) {
        return (int)sVar5;
      }
      uVar6 = FUN_001003e0(param_3);
      bVar2 = *(byte *)((long)param_2 + 0x66);
      if (0x1f < bVar2) {
        uVar6 = uVar6 & 0xffffffff;
        memcpy(auStack_d8,param_2,0x88);
        uVar8 = (bVar2 >> 4) - 1;
        uVar4 = uVar8;
        while (uVar4 != 0) {
          sVar5 = FUN_0010be60(param_1,auStack_d8,auStack_160,local_48);
          if (sVar5 < 0) {
            return (int)sVar5;
          }
          sVar5 = FUN_0010b7a0(param_1,auStack_160,param_3 + (uVar6 & 0xffff) * 2,
                               param_4 + (int)uVar6 * -2);
          uVar4 = (uint)sVar5;
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          uVar6 = (ulong)(uVar4 + (int)uVar6);
          memcpy(auStack_d8,auStack_160,0x88);
          uVar8 = uVar8 - 1;
          uVar4 = uVar8 & 0xff;
        }
      }
      uVar8 = *(ushort *)((long)param_2 + 0x72) & 0x7f;
      uVar6 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
      iVar7 = (int)uVar6;
      goto joined_r0x00105fcc;
    }
    pcVar9 = (code *)param_2[2];
    FUN_00109f20(auStack_d8);
    local_92 = (undefined2)param_4;
    local_c0 = param_2;
    local_a8 = param_3;
    sVar5 = (*pcVar9)(param_1,5,auStack_d8);
    uVar8 = (uint)sVar5;
    if ((int)uVar8 < 0) {
      return uVar8 << 8 | 0xffff8090;
    }
  }
  uVar6 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
  iVar7 = (int)uVar6;
joined_r0x00105fcc:
  if (iVar7 != 0) {
    lVar1 = 0x72;
    if (1 < (byte)((*(byte *)((long)param_2 + 0x67) >> 4) - 5)) {
      lVar1 = 0x70;
    }
    FUN_00100380(param_3 + (long)(int)uVar8 * 2,
                 *param_2 + ((ulong)*(ushort *)((long)param_2 + lVar1) & 0x7f) * 2,uVar6);
  }
  *(undefined2 *)(param_3 + (long)(int)uVar8 * 2 + uVar6 * 2) = 0;
  return (*(ushort *)((long)param_2 + 0x7c) & 0x7f) + (*(ushort *)((long)param_2 + 0x72) & 0x7f);
}

