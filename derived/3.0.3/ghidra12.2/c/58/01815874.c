
void FUN_01815874(long *param_1,long param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 local_14;
  
  (**(code **)(*(long *)param_1[0x60] + 0x100))((long *)param_1[0x60],param_2 + 8);
  puVar1 = (undefined8 *)((long)param_1 + 0x334);
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  *puVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x33c) = uVar11;
  *(char *)((long)param_1 + 0x432) = (char)param_1[0x6f];
  pfVar7 = (float *)(**(code **)(*(long *)param_1[0x60] + 0xf8))();
  lVar8 = param_1[0x60];
  uVar11 = *(undefined4 *)(lVar8 + 0x280);
  *puVar1 = *(undefined8 *)(lVar8 + 0x278);
  *(undefined4 *)((long)param_1 + 0x33c) = uVar11;
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(lVar8 + 0x278);
  puVar6 = PTR_DAT_04bb27c8;
  local_14 = 0;
  *(undefined4 *)((long)param_1 + 0x32c) = *(undefined4 *)(lVar8 + 0x27c);
  lVar9 = *(long *)puVar6;
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(lVar8 + 0x280);
  uVar11 = FUN_0093a950(lVar9 + 0x28,puVar1,&local_14);
  *(undefined4 *)(param_1 + 0x6b) = uVar11;
  *(char *)(param_1 + 0x7f) = (char)param_1[0x6e];
  *(char *)((long)param_1 + 0x3f9) = (char)*(undefined4 *)((long)param_1 + 0x374);
  *(undefined4 *)((long)param_1 + 0x35c) = 0x42480000;
  if (((*(char *)((long)param_1 + 0x432) == '\0') && (lVar8 = param_1[0x7a], lVar8 != 0)) &&
     ((**(code **)(*(long *)(lVar8 + 0x2d8) + 0x28))(lVar8 + 0x2d8),
     1 < *(byte *)(*DAT_0537d558 + 0x476))) {
    (**(code **)(*(long *)(param_1[0x7a] + 0x2d8) + 0x28))(param_1[0x7a] + 0x2d8);
    bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar2 = (byte *)(*DAT_0537d558 + 0x48);
      uVar10 = (long)(char)bVar5 & 0xffffffff;
      pbVar3 = pbVar2 + uVar10 * 0x80;
      if (7 < bVar5) {
        pbVar3 = pbVar2;
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar8 = DAT_0537d558[2] + 0x108 + uVar10 * 0xc;
        if (0xb < bVar5) {
          lVar8 = DAT_0537d558[2] + 0x108;
        }
        if ((*(char *)(lVar8 + 10) == '\0') && (*(long *)(DAT_052c21a0 + 0x10) != 0)) {
          uVar4 = *(uint *)(param_1[0x7a] + 0x2e0);
          if (*(uint *)(DAT_052c21a0 + 8) <= uVar4) {
            uVar4 = 0;
          }
          if ((*(byte *)(*(long *)(DAT_052c21a0 + 0x10) + (long)(int)uVar4 * 10 + 6) >> 4 & 1) != 0)
          {
            FUN_01947750();
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x86) = 1;
  if ((param_1[0x7b] != 0) && (lVar8 = param_1[0x7a], lVar8 != 0)) {
    (**(code **)(*(long *)(lVar8 + 0x2d8) + 0x28))(lVar8 + 0x2d8);
    bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar2 = (byte *)(*DAT_0537d558 + 0x48);
      uVar10 = (long)(char)bVar5 & 0xffffffff;
      pbVar3 = pbVar2 + uVar10 * 0x80;
      if (7 < bVar5) {
        pbVar3 = pbVar2;
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar8 = DAT_0537d558[2] + 0x108 + uVar10 * 0xc;
        if (0xb < bVar5) {
          lVar8 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar8 + 10) == '\0') {
          *(undefined1 *)(param_1[0x7b] + 0x294) = 0;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  fVar12 = *pfVar7;
  fVar13 = pfVar7[2];
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(uint *)(param_1 + 0x80) = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  *(uint *)((long)param_1 + 0x404) = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  return;
}

