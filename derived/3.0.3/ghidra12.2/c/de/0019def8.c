
void FUN_0019def8(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  
  *param_1 = (long)(PTR_DAT_04bcc1d0 + 0x10);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_0018ea28(param_1 + 4,0);
  FUN_00186460(param_1 + 6,0x20000000,0);
  param_1[6] = (long)(PTR_DAT_04bcbdd0 + 0x10);
  FUN_00186460(param_1 + 0xf,param_3,1);
  FUN_00186460(param_1 + 0x18,0x400,1);
  puVar1 = PTR_DAT_04bcc1d8;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = (long)(param_1 + 0x2c);
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = (long)puVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)puVar1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  cVar3 = *PTR_DAT_04bcc100;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (cVar3 == '\0') {
    plVar4 = (long *)FUN_00185a6c(0x60);
    if (plVar4 == (long *)0x0) goto LAB_0019e034;
    *plVar4 = (long)(PTR_DAT_04bcc1e8 + 0x10);
    FUN_00186460(plVar4 + 1,0x20000000,1);
    plVar4[10] = 0x100000000;
    plVar7 = plVar4 + 0xb;
  }
  else {
    plVar4 = (long *)FUN_00185a6c(0x28);
    if (plVar4 == (long *)0x0) goto LAB_0019e034;
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar1 = PTR_DAT_04bcc1e0;
    plVar4[2] = -1;
    *plVar4 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar4 + 3) = 1;
    plVar7 = plVar4 + 4;
  }
  *plVar7 = -1;
LAB_0019e034:
  param_1[0x37] = (long)plVar4;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if ((param_4 == (long *)0x0) && (param_4 = (long *)FUN_00185a6c(0x150), param_4 != (long *)0x0)) {
    *param_4 = (long)(PTR_DAT_04bcc1f0 + 0x10);
    FUN_00186460(param_4 + 1,0x20000000,1);
    puVar1 = PTR_DAT_04bcc1f8;
    *(undefined4 *)(param_4 + 10) = 2;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    *param_4 = (long)(puVar1 + 0x10);
    FUN_0019d094(0,param_4 + 0xf);
    param_4[0x29] = 0x6400000000;
    puVar1 = PTR_DAT_04bcc108;
    iVar2 = *(int *)PTR_DAT_04bcc208;
    cVar3 = *PTR_DAT_04bcc200;
    if ((iVar2 == 0) || ((*PTR_DAT_04bcc108 != '\0' && (cVar3 != '\0')))) {
      *(undefined4 *)(param_4 + 0x10) = 0;
      param_4[0x23] = 0;
    }
    else {
      fVar8 = 1000.0 / (float)iVar2;
      *(float *)(param_4 + 0x10) = fVar8;
      if (fVar8 == 0.0) {
        param_4[0x23] = 0;
      }
      else {
        param_4[0x23] = (ulong)(uint)(int)(1000.0 / fVar8);
      }
    }
    if ((cVar3 != '\0') && (cVar3 = *puVar1, *(undefined4 *)(param_4 + 0x29) = 1, cVar3 == '\0')) {
      *(int *)((long)param_4 + 0x14c) = iVar2;
    }
  }
  param_1[3] = (long)param_4;
  param_4[0xe] = (long)param_1;
  uVar6 = (uint)(byte)*PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 != 0) {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar5;
  }
  *(uint *)(param_1 + 0x36) = uVar6;
  return;
}

