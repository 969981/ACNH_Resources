
undefined8 FUN_0244cbcc(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  float local_38;
  
  *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 0x20;
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
  fVar7 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2890) + 0xf0))(lVar3 + 0x2890);
  fVar7 = fVar7 + *pfVar4;
  lVar3 = *(long *)(param_1 + 0x60);
  local_40 = CONCAT44(fVar7,(float)local_40);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x1428) != 1) &&
       (fVar5 = *(float *)(lVar3 + 0x133c) - (float)local_40,
       fVar7 = *(float *)(lVar3 + 0x1340) - fVar7, fVar6 = *(float *)(lVar3 + 0x1344) - local_38,
       2.0 < SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6))) {
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

