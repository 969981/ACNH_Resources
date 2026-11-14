
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01568de0(float param_1,long param_2,float *param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c0 [20];
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined *local_90;
  int local_88;
  int iStack_84;
  
  lVar8 = *(long *)(param_2 + 0x40);
  if (lVar8 != 0) {
    fVar12 = *(float *)(param_2 + 0x1a10);
    piVar5 = (int *)(**(code **)(*(long *)(lVar8 + 0x570) + 0xf0))(lVar8 + 0x570);
    fVar12 = fVar12 + param_1 * (float)*piVar5;
    uVar9 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar9 = (uint)(fVar12 < 0.0);
    }
    iVar10 = (int)fVar12 - uVar9;
    *(float *)(param_2 + 0x1a10) = fVar12 - (float)iVar10;
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    puVar4 = PTR_DAT_04bb27c8;
    if (0 < iVar10) {
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        uVar9 = *puVar6 ^ *puVar6 << 0xb;
        uVar3 = puVar6[3];
        uVar2 = puVar6[1] ^ puVar6[1] << 0xb;
        *puVar6 = puVar6[2];
        puVar6[1] = uVar3;
        local_90 = puVar1;
        local_a0 = 0;
        local_ac = 1.4013e-45;
        uVar9 = uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3;
        uVar2 = uVar2 >> 8 ^ uVar9 >> 0x13 ^ uVar2 ^ uVar9;
        puVar6[2] = uVar9;
        puVar6[3] = uVar2;
        local_98 = 0;
        fVar12 = *param_3 + ((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 160.0 + -80.0;
        fVar11 = param_3[2] + ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * 160.0 + -80.0;
        local_88 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
        iStack_84 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
        local_a0 = 2;
        local_98 = 0;
        lVar8 = *(long *)puVar4;
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
           (uVar7 = FUN_00949594(lVar8 + 0x28,&local_90,&local_a0), (uVar7 & 1) != 0)) {
          local_a4 = (float)iStack_84 * 5.0 + 2.5;
          local_ac = (float)local_88 * 5.0 + 2.5;
          local_a8 = FUN_015cb8d4(&local_ac,0);
          FUN_015fcb74(auStack_c0,param_4,&local_ac);
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}

