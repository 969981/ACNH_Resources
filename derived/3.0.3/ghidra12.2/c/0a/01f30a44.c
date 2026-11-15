
void FUN_01f30a44(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  uint local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined1 local_2c;
  undefined1 local_25;
  
  local_25 = 0;
  local_38 = 0x10;
  local_2c = 0;
  local_34 = 0x65636e6172746e45;
  local_40 = &local_34;
  local_48 = PTR_DAT_04bb2ab0 + 0x10;
  lVar3 = FUN_02917a1c(&local_48);
  if (lVar3 == 0) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      if (((iVar2 == 0x758f7eaf) &&
          (((DAT_05aed670 != 0 && (lVar3 = *(long *)(DAT_05aed670 + 0x330), lVar3 != 0)) &&
           (*(int *)(lVar3 + 0x260) != 0)))) && (*(long *)(lVar3 + 600) != 0)) {
        lVar3 = *(long *)(lVar3 + 600) + -0x40;
        local_40 = (undefined8 *)((ulong)local_40 & 0xffffffff00000000);
        local_48 = (undefined *)0x0;
        if (lVar3 == 0) {
          local_4c = 0;
          goto LAB_01f30bb4;
        }
        goto LAB_01f30aa0;
      }
    }
    local_4c = 0;
    local_40 = (undefined8 *)((ulong)local_40 & 0xffffffff00000000);
    local_48 = (undefined *)0x0;
  }
  else {
LAB_01f30aa0:
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x20));
    local_4c = (uint)(long)(fVar5 * 11930465.0);
    uVar1 = (ulong)(long)(fVar5 * 11930465.0) >> 0x18 & 0xff;
    fVar5 = (float)(local_4c & 0xffffff) * 5.9604645e-08;
    local_48 = (undefined *)
               CONCAT44(*(float *)(lVar3 + 0x10) + 0.0,
                        *(float *)(lVar3 + 0xc) -
                        ((float)(&DAT_04199798)[uVar1 * 4] +
                        fVar5 * (float)(&DAT_0419979c)[uVar1 * 4]) * 5.0);
    local_40 = (undefined8 *)
               CONCAT44(local_40._4_4_,
                        *(float *)(lVar3 + 0x14) -
                        ((float)(&DAT_041997a0)[uVar1 * 4] +
                        fVar5 * (float)(&DAT_041997a4)[uVar1 * 4]) * 5.0);
  }
LAB_01f30bb4:
  FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_48,&local_4c,0);
  return;
}

