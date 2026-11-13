
/* WARNING: Removing unreachable block (ram,0x01480024) */
/* WARNING: Removing unreachable block (ram,0x01480034) */

bool FUN_0147ff0c(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 local_50 [2];
  int local_48;
  int iStack_44;
  
  uVar1 = *param_2;
  if (uVar1 != 0x80000000) {
    uVar1 = uVar1 & 0x7fffffff;
  }
  lVar4 = FUN_0147f934(0xb);
  pbVar5 = (byte *)(**(code **)(*(long *)(lVar4 + 0x290) + 0xf0))(lVar4 + 0x290);
  local_50[0] = 1;
  uVar3 = 0;
  if (*pbVar5 != 0) {
    uVar3 = uVar1 / *pbVar5;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  FUN_015380bc(*(undefined8 *)(param_1 + 0xa90),local_50);
  iVar2 = *(int *)(lVar4 + 0x2b4);
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x8d4) = uVar3;
  *(uint *)(param_1 + 0x8d0) = uVar1 + iVar2;
  FUN_01473944(local_50,param_1);
  fVar8 = 0.0;
  if (local_48 != iStack_44) {
    if (local_48 < iStack_44) {
      iVar2 = iStack_44;
      iStack_44 = local_48;
    }
    else {
      iVar2 = local_48;
    }
    fVar8 = (float)(iVar2 + 1) * 0.5 * (1.0 - (float)(iStack_44 + 1) / (float)(iVar2 + 1)) * 5.0 *
            0.0;
  }
  lVar6 = *(long *)(param_1 + 0xa90);
  *(float *)(param_1 + 0x8d8) = fVar8;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(lVar6 + 0x284);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(lVar6 + 0x288);
  lVar7 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(lVar6 + 0x28c);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(lVar4 + 0x27c);
  *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(lVar7 + 0x278);
  *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(lVar7 + 0x27c);
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(lVar7 + 0x280);
  return *(int *)(param_1 + 0x8d0) != *(int *)(lVar7 + 0x2b4);
}

