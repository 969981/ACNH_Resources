
/* WARNING: Removing unreachable block (ram,0x032c04a4) */

void FUN_032c03f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined *local_d8;
  undefined ***local_d0;
  undefined **local_c8;
  undefined8 *puStack_c0;
  undefined *local_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  param_1[0x1e] = *param_2;
  param_1[0x1f] = param_2[1];
  param_1[0x20] = param_2[2];
  param_1[0x21] = param_2[3];
  param_1[0x22] = param_2[4];
  param_1[0x23] = param_2[5];
  param_1[0x24] = param_2[6];
  param_1[0x25] = param_2[7];
  param_1[0x26] = param_2[8];
  param_1[0x27] = param_2[9];
  param_1[0x28] = param_2[10];
  param_1[0x29] = param_2[0xb];
  local_d8 = (undefined *)param_2[9];
  if ((local_d8 != (undefined *)0x0) &&
     (local_d0 = (undefined ***)param_2[10], local_d0 != (undefined ***)0x0)) {
    local_c8 = (undefined **)*param_2;
    puVar1 = (undefined8 *)(**(code **)(*(long *)*local_c8 + 0x30))(*local_c8,0x70,8);
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_FUN_04b1a480;
    puVar1[1] = 0;
    plVar3 = (long *)param_1[0x2a];
    param_1[0x2a] = puVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      puVar1 = (undefined8 *)param_1[0x2a];
    }
    FUN_032b6270(puVar1,&local_d8);
    if (param_2[0xb] != 0) {
      lVar5 = param_1[0x2a];
      fVar8 = *(float *)(param_2[0xb] + 0x54);
      lVar7 = *(long *)(lVar5 + 0x68);
      fVar9 = *(float *)(lVar7 + 0x54);
      *(float *)(lVar7 + 0x54) = fVar8;
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
      lVar5 = *(long *)(lVar5 + 0x60);
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      fVar8 = fVar8 - (fVar9 - *(float *)(lVar5 + 0x54));
      fVar9 = *(float *)(lVar5 + 0x50);
      if (*(float *)(lVar5 + 0x50) <= fVar8) {
        fVar9 = fVar8;
      }
      *(float *)(lVar5 + 0x54) = fVar9;
    }
  }
  local_d8 = (undefined *)*param_2;
  local_c8 = (undefined **)0x0;
  puStack_c0 = (undefined8 *)0x0;
  puVar1 = param_1 + 1;
  local_b8 = (undefined *)0x0;
  local_d0 = (undefined ***)0x0;
  local_68 = 0x200000002;
  local_94 = 0;
  local_5c = 0x41700000;
  local_54 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_a8 = *(undefined4 *)((long)param_2 + 0x44);
  uStack_98 = 1;
  local_60 = 1;
  local_70 = 1;
  lStack_b0 = (ulong)*(uint *)(param_2 + 8) << 0x20;
  local_a4 = 0;
  local_9c = 0x3f99999a;
  local_78 = param_1[0x2a];
  local_6c = 0xf0000;
  local_90 = param_2[1];
  FUN_032b3910(puVar1,&local_d8);
  lVar5 = param_1[3];
  uVar2 = ((undefined8 *)*param_2)[1];
  *(undefined8 *)(lVar5 + 0x168) = *(undefined8 *)*param_2;
  *(undefined8 *)(lVar5 + 0x170) = uVar2;
  plVar3 = (long *)param_1[4];
  lVar5 = param_2[3];
  FUN_032e3db0(plVar3);
  if (lVar5 != 0) {
    *plVar3 = lVar5;
    lVar7 = *(long *)(lVar5 + 8);
    if (*(long *)(lVar5 + 8) == 0) {
      *(long **)(lVar5 + 8) = plVar3;
    }
    else {
      do {
        lVar4 = lVar7;
        lVar7 = *(long *)(lVar4 + 0x18);
      } while (*(long *)(lVar4 + 0x18) != 0);
      *(long **)(lVar4 + 0x18) = plVar3;
      plVar3[2] = lVar4;
    }
    if ((*(ushort *)(plVar3 + 10) >> 6 & 1) != 0) {
      plVar3[5] = *(long *)(lVar5 + 0x28);
    }
  }
  *(undefined1 *)((long)param_1 + 0xa1) = 1;
  *(ushort *)(param_1[4] + 0x50) = *(ushort *)(param_1[4] + 0x50) | 1;
  uVar2 = FUN_032d3cb0(param_2[2],*param_2);
  *param_1 = uVar2;
  local_d0 = &local_c8;
  local_d8 = PTR_DAT_04bc9038 + 0x10;
  lVar5 = *(long *)(param_2[4] + 0x18);
  ppuVar6 = &PTR_LAB_04b1a3f8;
  local_c8 = &PTR_LAB_04b1a3f8;
  local_b8 = PTR_LAB_04bc92f8;
  lStack_b0 = 0;
  plVar3 = *(long **)(lVar5 + 0x88);
  puStack_c0 = puVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (local_d0 == (undefined ***)0x0) {
      *(undefined8 *)(lVar5 + 0x88) = 0;
      return;
    }
    ppuVar6 = *local_d0;
  }
  uVar2 = (*(code *)ppuVar6[3])(local_d0,lVar5 + 0x90);
  *(undefined8 *)(lVar5 + 0x88) = uVar2;
  if (local_d0 != (undefined ***)0x0) {
    (*(code *)(*local_d0)[1])();
  }
  return;
}

