
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01569050(long param_1,float *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined *local_d0;
  char *pcStack_c8;
  undefined1 auStack_c0 [20];
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined *local_90;
  int local_88;
  int iStack_84;
  
  lVar12 = *(long *)(param_1 + 0x40);
  if (lVar12 != 0) {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    plVar1 = (long *)(lVar12 + 0x570);
    piVar9 = (int *)(**(code **)(*(long *)(lVar12 + 0x570) + 0xf0))(plVar1);
    puVar7 = PTR_DAT_04bb27c8;
    if (0 < *piVar9) {
      iVar11 = 0;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar4 = *puVar8 ^ *puVar8 << 0xb;
        uVar6 = puVar8[3];
        uVar5 = puVar8[1] ^ puVar8[1] << 0xb;
        *puVar8 = puVar8[2];
        puVar8[1] = uVar6;
        local_90 = puVar2;
        local_a0 = 0;
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
        uVar4 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar4 ^ uVar6;
        uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        local_98 = 0;
        fVar13 = *param_2 + ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 160.0 + -80.0;
        fVar14 = param_2[2] + ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * 160.0 + -80.0;
        local_88 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
        iStack_84 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
        local_a0 = 2;
        local_98 = 0;
        lVar12 = *(long *)puVar7;
        if (((lVar12 != 0) && (*(long *)(lVar12 + 0xa8) != 0)) &&
           (uVar10 = FUN_00949594(lVar12 + 0x28,&local_90,&local_a0), (uVar10 & 1) != 0)) {
          local_a4 = (float)iStack_84 * 5.0 + 2.5;
          local_ac = (float)local_88 * 5.0 + 2.5;
          local_a8 = FUN_015cb8d4(&local_ac,0);
          pcStack_c8 = "RiverFlowFoam";
          local_d0 = puVar3;
          FUN_015fcb74(auStack_c0,&local_d0,&local_ac);
        }
        iVar11 = iVar11 + 1;
        piVar9 = (int *)(**(code **)(*plVar1 + 0xf0))(plVar1);
      } while (iVar11 < *piVar9);
    }
  }
  return;
}

