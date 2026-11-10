
uint FUN_00105af0(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  ulong uVar13;
  undefined4 local_168 [2];
  undefined1 auStack_160 [136];
  undefined1 auStack_d8 [24];
  long *local_c0;
  long local_b0;
  undefined2 local_94;
  
  bVar8 = (*(byte *)((long)param_2 + 0x67) & 0xf0) != 0x50;
  lVar1 = 0x72;
  if (bVar8) {
    lVar1 = 0x70;
  }
  lVar2 = 0x7c;
  if (bVar8) {
    lVar2 = 0x7a;
  }
  uVar10 = (*(ushort *)((long)param_2 + lVar2) & 0x7f) + (*(ushort *)((long)param_2 + lVar1) & 0x7f)
  ;
  if ((*(ushort *)(param_2 + 0x10) & 0xf) == 3) {
    if (0x32 < uVar10) {
      return 0x8635;
    }
  }
  else if (0x37 < uVar10) {
    return 0x8635;
  }
  if (uVar10 == 0) {
    return 0x9b35;
  }
  if ((param_4 & 0xffff) < uVar10 * 2 + 2) {
    return 0x9435;
  }
  bVar3 = *(byte *)((long)param_2 + 0x67) >> 4;
  local_168[0] = 0;
  lVar1 = 0x72;
  if (1 < (byte)(bVar3 - 5)) {
    lVar1 = 0x70;
  }
  if ((*(byte *)((long)param_2 + lVar1) & 0x7f) == 0) {
    uVar10 = 0;
  }
  else {
    if ((*(ushort *)(param_2 + 0x10) & 0xf) == 3) {
LAB_00105be0:
      lVar1 = 0x72;
      if (1 < (byte)(bVar3 - 5)) {
        lVar1 = 0x70;
      }
      uVar5 = *(ushort *)((long)param_2 + lVar1);
      uVar10 = uVar5 & 0x7f;
      FUN_00100380(param_3,*param_2,uVar10);
      *(undefined2 *)(param_3 + ((ulong)uVar5 & 0x7f) * 2) = 0;
      uVar13 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
      iVar12 = (int)uVar13;
      goto joined_r0x00105dc8;
    }
    if (*(char *)((long)param_2 + 0x74) == '\0') {
      sVar9 = FUN_0010b5b0(param_1,param_2,param_3,param_4);
      uVar10 = (uint)sVar9;
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar13 = FUN_001003e0(param_3);
      bVar3 = *(byte *)((long)param_2 + 0x66);
      if (0x1f < bVar3) {
        uVar13 = uVar13 & 0xffffffff;
        memcpy(auStack_d8,param_2,0x88);
        uVar6 = (bVar3 >> 4) - 1;
        uVar7 = uVar6;
        while (uVar7 != 0) {
          sVar9 = FUN_0010be60(param_1,auStack_d8,auStack_160,local_168);
          if (sVar9 < 0) {
            return (int)sVar9;
          }
          sVar9 = FUN_0010b5b0(param_1,auStack_160,param_3 + (uVar13 & 0xffff) * 2,
                               param_4 + (int)uVar13 * -2);
          uVar7 = (uint)sVar9;
          if ((int)uVar7 < 0) {
            return uVar7;
          }
          uVar13 = (ulong)(uVar7 + (int)uVar13);
          memcpy(auStack_d8,auStack_160,0x88);
          uVar6 = uVar6 - 1;
          uVar7 = uVar6 & 0xff;
        }
      }
      uVar6 = (*(byte *)((long)param_2 + 0x67) >> 4) - 5;
      if (1 < uVar6) {
        lVar1 = 0x72;
        if (1 < (uVar6 & 0xff)) {
          lVar1 = 0x70;
        }
        uVar10 = *(ushort *)((long)param_2 + lVar1) & 0x7f;
        uVar13 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
        iVar12 = (int)uVar13;
        goto joined_r0x00105dc8;
      }
    }
    else {
      if (*(char *)((long)param_2 + 0x74) == '\x02') goto LAB_00105be0;
      pcVar11 = (code *)param_2[2];
      FUN_00109f20(auStack_d8);
      local_94 = (undefined2)param_4;
      local_c0 = param_2;
      local_b0 = param_3;
      sVar9 = (*pcVar11)(param_1,4,auStack_d8);
      uVar10 = (uint)sVar9;
      if ((int)uVar10 < 0) {
        return uVar10 << 8 | 0xffff8090;
      }
    }
  }
  uVar13 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
  iVar12 = (int)uVar13;
joined_r0x00105dc8:
  if (iVar12 != 0) {
    lVar1 = 0x72;
    if (1 < (byte)((*(byte *)((long)param_2 + 0x67) >> 4) - 5)) {
      lVar1 = 0x70;
    }
    FUN_00100380(param_3 + (long)(int)uVar10 * 2,
                 *param_2 + ((ulong)*(ushort *)((long)param_2 + lVar1) & 0x7f) * 2,uVar13);
  }
  *(undefined2 *)(param_3 + (long)(int)uVar10 * 2 + uVar13 * 2) = 0;
  uVar6 = (uint)(*(byte *)((long)param_2 + 0x67) >> 4);
  if (uVar6 - 5 < 2) {
    return (int)uVar13 + uVar10;
  }
  if (uVar6 == 5) {
    uVar5 = *(ushort *)((long)param_2 + 0x72);
    uVar4 = *(ushort *)((long)param_2 + 0x7c);
  }
  else {
    uVar5 = *(ushort *)(param_2 + 0xe);
    uVar4 = *(ushort *)((long)param_2 + 0x7a);
  }
  return (uVar4 & 0x7f) + (uVar5 & 0x7f);
}

