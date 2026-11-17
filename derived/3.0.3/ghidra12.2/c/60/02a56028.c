
void FUN_02a56028(float *param_1,float *param_2)

{
  undefined *puVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_PTR_04bb4f70;
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  fVar2 = 600.0;
  fVar5 = 0.0;
  if (600.0 <= *param_2) {
    fVar4 = (*param_2 + -600.0) / 300.0;
    fVar2 = 1.0;
    if (fVar4 <= 1.0) {
      fVar2 = fVar4;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar2;
    }
  }
  (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(lVar3 + 0x19dcd8) * 8))
            (fVar5,(byte *)(lVar3 + 0x19dcd8),*(undefined8 *)(lVar3 + 0x19dcd0));
  *param_1 = fVar2;
  (**(code **)(puVar1 + (ulong)*(byte *)(lVar3 + 0x19dd88) * 8))
            (fVar5,(byte *)(lVar3 + 0x19dd88),*(undefined8 *)(lVar3 + 0x19dd80));
  param_1[1] = fVar2;
  return;
}

