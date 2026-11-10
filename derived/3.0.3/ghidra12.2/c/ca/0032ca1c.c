
void FUN_0032ca1c(float param_1,undefined8 param_2,float *param_3,long param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 local_40;
  float local_38;
  undefined1 local_34 [4];
  
  puVar7 = *(undefined8 **)(*(long *)(param_4 + 0x240) + 0x250);
  if (*(int *)(puVar7 + 2) == 0) {
    local_40 = *puVar7;
    local_38 = *(float *)(puVar7 + 1);
    uVar3 = *(uint *)((long)puVar7 + 0xc);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = (uint)(int)param_1 / uVar3;
    }
    if ((int)param_1 == uVar5 * uVar3) goto LAB_0032cb48;
  }
  else {
    iVar2 = *(int *)((long)puVar7 + 0x1c);
    if (iVar2 == 0) {
      local_38 = 0.0;
      local_40 = 0;
      uVar3 = *(uint *)((long)puVar7 + 0xc);
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = (uint)(int)param_1 / uVar3;
      }
      if ((int)param_1 == uVar5 * uVar3) goto LAB_0032cb48;
    }
    else {
      if (*(int *)((long)puVar7 + 0x14) == 0) {
        fVar8 = param_1 / *(float *)(*(long *)(param_4 + 0xb0) + (long)(int)param_5 * 0x20 + 0xc);
      }
      else {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(puVar7 + 3));
        fVar8 = fmodf(param_1 + (float)*(int *)(puVar7 + 4) *
                                *(float *)(*(long *)(param_4 + 0x1f0) +
                                          (-(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)param_5 << 4)) * fVar8,(float)*(int *)(puVar7 + 4))
        ;
        iVar2 = *(int *)((long)puVar7 + 0x1c);
        fVar8 = fVar8 / (float)*(int *)(puVar7 + 4);
      }
      local_34[0] = 0;
      local_38 = 0.0;
      local_40 = 0;
      FUN_0032c0c0(fVar8,&local_40,local_34,puVar7 + 5,iVar2,*(undefined4 *)((long)puVar7 + 0x24));
      uVar3 = *(uint *)((long)puVar7 + 0xc);
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = (uint)(int)param_1 / uVar3;
      }
      if ((int)param_1 == uVar5 * uVar3) {
LAB_0032cb48:
        lVar6 = DAT_04c61c30;
        uVar4 = *(ushort *)(param_4 + 0xa8);
        *(ushort *)(param_4 + 0xa8) = uVar4 + 1;
        uVar9 = *(undefined8 *)param_3;
        pfVar1 = (float *)(lVar6 + ((ulong)uVar4 & 0x1ff) * 0x10);
        *param_3 = (float)uVar9 + (float)local_40 * *pfVar1;
        param_3[1] = (float)((ulong)uVar9 >> 0x20) + local_40._4_4_ * pfVar1[1];
        *(ulong *)(param_3 + 2) =
             (ulong)(uint)((float)*(undefined8 *)(param_3 + 2) + local_38 * pfVar1[2]);
        *(undefined8 *)param_3 = *(undefined8 *)param_3;
        return;
      }
    }
  }
  return;
}

