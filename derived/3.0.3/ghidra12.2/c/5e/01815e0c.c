
void FUN_01815e0c(long param_1,uint param_2,float *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  float fVar8;
  
  lVar5 = *(long *)(param_1 + 0x3d0);
  if ((lVar5 != 0) &&
     ((**(code **)(*(long *)(lVar5 + 0x2d8) + 0x28))(lVar5 + 0x2d8),
     1 < *(byte *)(*DAT_0537d558 + 0x476))) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x2d8) + 0x28))
              (*(long *)(param_1 + 0x3d0) + 0x2d8);
    bVar3 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar6 = (byte *)(*DAT_0537d558 + 0x48);
      uVar7 = (long)(char)bVar3 & 0xffffffff;
      pbVar1 = pbVar6 + uVar7 * 0x80;
      if (7 < bVar3) {
        pbVar1 = pbVar6;
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar5 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
        if (0xb < bVar3) {
          lVar5 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar5 + 10) == '\0') {
          return;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x3d0);
    if ((*(int *)(lVar5 + 0x17c) != 1) && (*(long *)(DAT_052c21a0 + 0x10) != 0)) {
      uVar2 = *(uint *)(lVar5 + 0x2e0);
      if (*(uint *)(DAT_052c21a0 + 8) <= uVar2) {
        uVar2 = 0;
      }
      pbVar6 = (byte *)(*(long *)(DAT_052c21a0 + 0x10) + (long)(int)uVar2 * 10);
      *pbVar6 = *pbVar6 & 0x7f | (byte)(param_2 << 7);
      pbVar6[1] = pbVar6[1] & 0xf8 | (byte)(param_2 >> 1) & 7;
      uVar2 = (int)*param_3 >> 2;
      pbVar6[1] = (byte)(uVar2 << 3) | (byte)(param_2 >> 1) & 7;
      pbVar6[2] = pbVar6[2] & 0xe0 | (byte)(uVar2 >> 5) & 0x1f;
      fVar8 = param_3[2];
      pbVar6[2] = (byte)(((int)fVar8 >> 2) << 5) | (byte)(uVar2 >> 5) & 0x1f;
      pbVar6[3] = pbVar6[3] & 0x80 | (byte)((uint)((int)fVar8 >> 2) >> 3) & 0x7f;
      pbVar6[6] = pbVar6[6] & 0xf3 | (*(byte *)(param_1 + 0x3fa) & 3) << 2;
      plVar4 = (long *)(**(code **)(*(long *)(lVar5 + 0x2d8) + 0x20))(lVar5 + 0x2d8);
                    /* WARNING: Could not recover jumptable at 0x01815fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined4 *)(lVar5 + 0x2e0),0);
      return;
    }
  }
  return;
}

