
void FUN_0396e840(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04bb39d8;
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = puVar4[3];
  uVar3 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar3 = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
  puVar4[2] = uVar1;
  puVar4[3] = uVar3;
  lVar5 = *(long *)(*(long *)(param_1 + 0xbd0) +
                   (long)(int)(((float)(uVar3 >> 9 | 0x3f800000) + -1.0) *
                              (float)*(int *)(param_1 + 0xbc8)) * 8);
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
  uVar3 = *puVar4 ^ *puVar4 << 0xb;
  uVar1 = puVar4[3];
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar3 = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
  puVar4[2] = uVar1;
  puVar4[3] = uVar3;
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  uVar7 = (ulong)(uint)(*(int *)(lVar5 + 8) +
                       (int)(((float)(uVar3 >> 9 | 0x3f800000) + -1.0) *
                            (float)(*(uint *)(lVar5 + 0x24) >> 2)));
  lVar5 = (*DAT_04c61fd0)(uVar6);
  *(undefined4 *)(lVar5 + uVar7) = 0xeeeeeeee;
  uVar3 = (**(code **)PTR_DAT_04bcf030)(uVar6);
  if ((uVar3 >> 2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0396e984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf350)(uVar6,uVar7,4);
  return;
}

