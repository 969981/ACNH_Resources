
void FUN_03017410(long param_1,undefined8 *param_2,byte param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  *(byte *)(param_1 + 0x250) = param_3;
  memcpy((void *)(param_1 + 0x260),param_2,0x100);
  memcpy((void *)(param_1 + 0x360),param_2 + 0x20,0x100);
  if (*(long *)(param_1 + 0x238) != 0) {
    FUN_03017620(*(long *)(param_1 + 0x238),param_2,param_3 & 1);
  }
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x228))) {
    puVar5 = *(undefined8 **)(param_1 + 0x230);
    plVar7 = (long *)(param_4 + 200);
    if (puVar5 != (undefined8 *)0x0) {
      uVar2 = param_2[1];
      *puVar5 = *param_2;
      puVar5[1] = uVar2;
      uVar2 = param_2[3];
      puVar5[2] = param_2[2];
      puVar5[3] = uVar2;
      uVar2 = param_2[5];
      puVar5[4] = param_2[4];
      puVar5[5] = uVar2;
      uVar2 = param_2[7];
      puVar5[6] = param_2[6];
      puVar5[7] = uVar2;
      uVar2 = param_2[9];
      puVar5[8] = param_2[8];
      puVar5[9] = uVar2;
      uVar2 = param_2[0xb];
      puVar5[10] = param_2[10];
      puVar5[0xb] = uVar2;
      uVar2 = param_2[0xd];
      puVar5[0xc] = param_2[0xc];
      puVar5[0xd] = uVar2;
      uVar2 = param_2[0xf];
      puVar5[0xe] = param_2[0xe];
      puVar5[0xf] = uVar2;
      uVar2 = param_2[0x11];
      puVar5[0x10] = param_2[0x10];
      puVar5[0x11] = uVar2;
      uVar2 = param_2[0x13];
      puVar5[0x12] = param_2[0x12];
      puVar5[0x13] = uVar2;
      uVar2 = param_2[0x15];
      puVar5[0x14] = param_2[0x14];
      puVar5[0x15] = uVar2;
      uVar2 = param_2[0x17];
      puVar5[0x16] = param_2[0x16];
      puVar5[0x17] = uVar2;
      uVar2 = param_2[0x19];
      puVar5[0x18] = param_2[0x18];
      puVar5[0x19] = uVar2;
      uVar2 = param_2[0x1b];
      puVar5[0x1a] = param_2[0x1a];
      puVar5[0x1b] = uVar2;
      uVar2 = param_2[0x1d];
      puVar5[0x1c] = param_2[0x1c];
      puVar5[0x1d] = uVar2;
      uVar2 = param_2[0x1f];
      puVar5[0x1e] = param_2[0x1e];
      puVar5[0x1f] = uVar2;
    }
    uVar8 = 1;
    do {
      if ((long)(int)*(uint *)(param_1 + 0x228) <= (long)uVar8) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x230);
      uVar1 = uVar8;
      if (*(uint *)(param_1 + 0x228) <= uVar8) {
        uVar1 = 0;
      }
      if (lVar6 != 0) {
        lVar9 = 0;
        plVar10 = plVar7;
        do {
          lVar3 = (**(code **)(*plVar10 + 0xf0))(plVar10);
          bVar11 = *(byte *)(lVar3 + 3);
          lVar3 = (**(code **)(*plVar10 + 0xf0))(plVar10);
          bVar12 = *(byte *)(lVar3 + 2);
          lVar3 = (**(code **)(*plVar10 + 0xf0))(plVar10);
          bVar13 = *(byte *)(lVar3 + 1);
          pbVar4 = (byte *)(**(code **)(*plVar10 + 0xf0))(plVar10);
          local_80 = (float)NEON_ucvtf((uint)bVar11);
          fStack_7c = (float)NEON_ucvtf((uint)bVar12);
          local_80 = local_80 / 255.0;
          local_78 = (float)NEON_ucvtf((uint)bVar13);
          fStack_7c = fStack_7c / 255.0;
          fStack_74 = (float)NEON_ucvtf((uint)*pbVar4);
          local_78 = local_78 / 255.0;
          fStack_74 = fStack_74 / 255.0;
          FUN_02ff7de0(&local_80,lVar6 + uVar1 * 0x100 + lVar9);
          lVar9 = lVar9 + 0x10;
          plVar10 = plVar10 + 6;
        } while (lVar9 != 0xf0);
      }
      uVar8 = uVar8 + 1;
      plVar7 = plVar7 + 0x5a;
    } while (uVar8 != 0xf);
  }
  return;
}

