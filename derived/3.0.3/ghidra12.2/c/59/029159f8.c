
/* WARNING: Removing unreachable block (ram,0x02915c54) */
/* WARNING: Removing unreachable block (ram,0x02915b84) */
/* WARNING: Removing unreachable block (ram,0x02915a68) */
/* WARNING: Removing unreachable block (ram,0x02915aec) */
/* WARNING: Removing unreachable block (ram,0x02915bd0) */
/* WARNING: Removing unreachable block (ram,0x02915cd0) */

undefined8 FUN_029159f8(float *param_1,uint *param_2,float *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_68;
  char local_64;
  
  uVar2 = FUN_02911218(&local_7c,param_4);
  if ((uVar2 & 1) != 0) {
    local_68 = 1.96182e-44;
    (**(code **)(DAT_055cc2f8 + 0x18))(&DAT_055cc2f8);
    local_68 = 0.0;
    local_64 = '\0';
    uVar2 = FUN_03ea9450(param_4,&local_68,DAT_055cc300);
    fVar4 = local_68;
    if (((uVar2 & 1) != 0) && (local_64 != -1)) {
      if (local_64 == -0x2f) {
        if ((int)local_68 < 0) {
          return 0;
        }
      }
      else if (local_64 != -0x2d) {
        return 0;
      }
      local_68 = 3.92364e-44;
      (**(code **)(DAT_055cc3d8 + 0x18))(&DAT_055cc3d8);
      local_68 = 0.0;
      local_64 = '\0';
      uVar2 = FUN_03ea9450(param_4,&local_68,DAT_055cc3e0);
      fVar5 = local_68;
      if (((uVar2 & 1) != 0) && (local_64 == -0x2e)) {
        *param_3 = 0.0;
        local_68 = 4.90454e-44;
        (**(code **)(DAT_055cc448 + 0x18))(&DAT_055cc448);
        uVar2 = FUN_03ea91a0(param_4,DAT_055cc450);
        if ((uVar2 & 1) != 0) {
          local_68 = 4.90454e-44;
          (**(code **)(DAT_055cc448 + 0x18))(&DAT_055cc448);
          local_68 = 0.0;
          local_64 = '\0';
          uVar2 = FUN_03ea9450(param_4,&local_68,DAT_055cc450);
          if (((uVar2 & 1) != 0) && (local_64 != -1)) {
            if (local_64 != -0x2d) {
              if (local_64 != -0x2f) goto LAB_02915c2c;
              local_68 = (float)((uint)local_68 & ((int)local_68 >> 0x1f ^ 0xffffffffU));
            }
            *param_3 = local_68;
          }
        }
LAB_02915c2c:
        local_68 = 4.62428e-44;
        (**(code **)(DAT_055cc428 + 0x18))(&DAT_055cc428);
        local_68 = 0.0;
        local_64 = '\0';
        bVar1 = FUN_03ea9450(param_4,&local_68,DAT_055cc430);
        fVar6 = local_68;
        if ((bVar1 & local_64 == -0x2e) == 0) {
          fVar6 = 0.0;
        }
        local_68 = 0.0;
        if ((param_5 & 1) != 0) {
          local_68 = 4.76441e-44;
          (**(code **)(DAT_055cc438 + 0x18))(&DAT_055cc438);
          local_68 = 0.0;
          local_64 = '\0';
          bVar1 = FUN_03ea9450(param_4,&local_68,DAT_055cc440);
          if ((bVar1 & local_64 == -0x2e) == 0) {
            local_68 = 0.0;
          }
        }
        local_68 = fVar6 + fVar5 * 0.5 + local_68;
        uVar3 = (uint)(long)((float)(uint)fVar4 * 11930465.0);
        *param_2 = uVar3;
        uVar2 = (ulong)(long)((float)(uint)fVar4 * 11930465.0) >> 0x18 & 0xff;
        fVar4 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
        fVar5 = (float)(&DAT_041997a0)[uVar2 * 4];
        fVar6 = (float)(&DAT_041997a4)[uVar2 * 4];
        *param_1 = local_68 *
                   ((float)(&DAT_04199798)[uVar2 * 4] + fVar4 * (float)(&DAT_0419979c)[uVar2 * 4]) +
                   local_7c;
        param_1[1] = fStack_78 + 0.0;
        param_1[2] = local_68 * (fVar5 + fVar4 * fVar6) + local_74;
        return 1;
      }
    }
  }
  return 0;
}

