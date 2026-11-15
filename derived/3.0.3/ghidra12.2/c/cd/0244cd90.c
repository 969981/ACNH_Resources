
undefined8 FUN_0244cd90(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_40;
  float local_38;
  
  if (*(int *)(param_1 + 0x1810) == 4 || *(int *)(param_1 + 0x1810) == 7) goto LAB_0244cdb8;
  lVar3 = *(long *)(param_1 + 0x70);
  if (((lVar3 == 0) || (0x148 < *(uint *)(lVar3 + 0x280))) ||
     ((*(uint *)(lVar3 + 0x280) & 0xfffffffe) != 0x2a)) {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar2 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar2 = &DAT_05240280;
      }
    }
    if ((*(uint *)((long)puVar2 + 0x15f4) >> 5 & 1) == 0) goto LAB_0244cdb8;
    lVar3 = *(long *)(param_1 + 0x70);
    uVar5 = 0;
    if (lVar3 != 0) goto LAB_0244cfa4;
  }
  else {
LAB_0244cfa4:
    uVar5 = 0;
    if (*(uint *)(lVar3 + 0x280) < 0x149) {
      uVar5 = *(uint *)(lVar3 + 0x280);
    }
  }
  if (uVar5 != 0x2b) {
    return 0;
  }
LAB_0244cdb8:
  *(byte *)(param_1 + 0x18f4) = *(byte *)(param_1 + 0x18f4) | 0x10;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  local_38 = 0.0;
  local_40 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_016ff8c0(puVar2,8,&local_40);
  fVar8 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2890) + 0xf0))(lVar3 + 0x2890);
  fVar8 = fVar8 + *pfVar4;
  lVar3 = *(long *)(param_1 + 0x60);
  local_40 = CONCAT44(fVar8,(float)local_40);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x1428) != 1) &&
       (fVar6 = *(float *)(lVar3 + 0x133c) - (float)local_40,
       fVar8 = *(float *)(lVar3 + 0x1340) - fVar8, fVar7 = *(float *)(lVar3 + 0x1344) - local_38,
       2.0 < SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7))) {
      *(undefined1 *)(lVar3 + 0x142d) = 0;
    }
    *(undefined4 *)(lVar3 + 0x12d0) = 0;
    **(undefined1 **)(lVar3 + 0x12e0) = 0;
    *(undefined8 *)(lVar3 + 0x1334) = 0;
    *(undefined8 *)(lVar3 + 0x133c) = local_40;
    *(float *)(lVar3 + 0x1344) = local_38;
    *(undefined4 *)(lVar3 + 0x1428) = 1;
  }
  return 1;
}

