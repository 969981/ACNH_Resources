
void FUN_039380b0(undefined8 param_1,long *param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  undefined8 local_2c;
  
  lVar8 = param_2[4];
  if (lVar8 == 0) {
    uVar7 = 0xffffffff;
    uVar6 = 0xffffffff;
    lVar8 = param_2[0xc];
  }
  else {
    if (*(byte *)(lVar8 + 0xbe) != param_3) {
      puVar1 = (uint *)(lVar8 + 0xb8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(char *)(lVar8 + 0xbe) = (char)param_3;
      lVar8 = param_2[4];
    }
    uVar4 = *(ushort *)(lVar8 + 0x38) >> (ulong)(param_3 & 0x1f);
    uVar6 = (uint)uVar4;
    if (uVar4 < 2) {
      uVar6 = 1;
    }
    uVar7 = (uint)*(ushort *)(lVar8 + 0x3a);
    if (*(short *)(lVar8 + 0x42) != 3) {
      uVar7 = 1;
    }
    uVar4 = *(ushort *)(lVar8 + 0x3a) >> (ulong)(param_3 & 0x1f);
    if (uVar7 <= uVar4) {
      uVar7 = (uint)uVar4;
    }
    lVar8 = param_2[0xc];
  }
  if (lVar8 != 0) {
    if (*(byte *)(lVar8 + 0xbe) != param_3) {
      puVar1 = (uint *)(lVar8 + 0xb8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(char *)(lVar8 + 0xbe) = (char)param_3;
      lVar8 = param_2[0xc];
    }
    uVar4 = *(ushort *)(lVar8 + 0x38) >> (ulong)(param_3 & 0x1f);
    uVar6 = (uint)uVar4;
    if (uVar4 < 2) {
      uVar6 = 1;
    }
    uVar7 = (uint)*(ushort *)(lVar8 + 0x3a);
    if (*(short *)(lVar8 + 0x42) != 3) {
      uVar7 = 1;
    }
    uVar4 = *(ushort *)(lVar8 + 0x3a) >> (ulong)(param_3 & 0x1f);
    if (uVar7 <= uVar4) {
      uVar7 = (uint)uVar4;
    }
  }
  fVar9 = (float)(int)(uVar6 & (int)uVar6 >> 0x1f);
  local_38 = 0xff7fffffff7fffff;
  fVar10 = (float)(int)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
  fVar12 = (float)(int)(uVar7 & (int)uVar7 >> 0x1f);
  local_30 = *(uint *)PTR_DAT_04bd0ea8;
  *(float *)(param_2 + 1) = (float)(int)uVar6;
  *(float *)((long)param_2 + 0xc) = (float)(int)uVar7;
  fVar13 = (float)(int)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
  local_48 = &PTR_LAB_04b65888;
  local_40 = 0x7f7fffff7f7fffff;
  *(float *)(param_2 + 2) = fVar9;
  *(float *)((long)param_2 + 0x14) = fVar12;
  local_2c = 0x3f80000000000000;
  *(float *)(param_2 + 3) = fVar10;
  *(float *)((long)param_2 + 0x1c) = fVar13;
  if (local_30 < 6) {
    fVar11 = fVar13;
    fVar5 = fVar12;
    if ((1 << (ulong)(local_30 & 0x1f) & 0x39U) == 0) {
      fVar11 = fVar10;
      fVar5 = fVar9;
      fVar10 = fVar13;
      fVar9 = fVar12;
    }
    local_40 = CONCAT44(fVar5,fVar9);
    local_38 = CONCAT44(fVar11,fVar10);
  }
  FUN_038e77e4(&local_48,param_1,param_2);
  (**(code **)(*param_2 + 0x38))(param_2,param_1);
  return;
}

