
void FUN_03b82920(long param_1,float *param_2,long *param_3)

{
  size_t __size;
  long lVar1;
  void *__s;
  uint uVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float __x;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  fVar6 = param_2[1];
  *(float *)(param_1 + 0xc) = fVar6;
  uVar2 = (uint)(((fVar6 + fVar6) * *param_2) / 1000.0);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  __size = (ulong)uVar2 << 4;
  *(float *)(param_1 + 0x10) = *param_2;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    __s = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_3 = (long *)(lVar1 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    __s = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
  }
  memset(__s,0,__size);
  fVar6 = *(float *)(param_1 + 0x14);
  *(void **)(param_1 + 0x30) = __s;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((0.0 <= fVar6) && (fVar6 <= *(float *)(param_1 + 0x10))) {
    iVar3 = (int)((fVar6 * *(float *)(param_1 + 0xc)) / 1000.0);
    *(int *)(param_1 + 0x3c) = iVar3;
    *(float *)(param_1 + 0x44) = (float)-iVar3;
    if (0 < iVar3) {
      *(float *)(param_1 + 0x44) = (float)-iVar3 + (float)*(int *)(param_1 + 0x38);
    }
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x18) * (float)iVar3;
  }
  if (0.0 <= *(float *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x4c) =
         (int)(*(float *)(param_1 + 0x1c) * (4.2949673e+09 / *(float *)(param_1 + 0xc)));
  }
  fVar6 = *(float *)(param_1 + 0x18);
  if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
    *(float *)(param_1 + 0x50) = fVar6 * (float)*(int *)(param_1 + 0x3c);
  }
  lVar4 = 0;
  pfVar5 = (float *)(param_1 + 0x60);
  do {
    __x = (float)(int)lVar4 * 0.0078125;
    fVar6 = powf(__x,3.0);
    pfVar5[-3] = fVar6 / 6.0;
    fVar6 = powf(__x + 1.0,3.0);
    fVar7 = powf(__x,3.0);
    pfVar5[-2] = (fVar6 + fVar7 * -4.0) / 6.0;
    fVar6 = powf(2.0 - __x,3.0);
    fVar7 = powf(1.0 - __x,3.0);
    pfVar5[-1] = (fVar6 + fVar7 * -4.0) / 6.0;
    fVar6 = powf(1.0 - __x,3.0);
    lVar4 = lVar4 + 1;
    *pfVar5 = fVar6 / 6.0;
    pfVar5 = pfVar5 + 4;
  } while (lVar4 != 0x80);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

