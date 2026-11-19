
void FUN_039189b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_24;
  
  if ((char)param_4[1] == '\0') {
    if (*(char *)((long)param_4 + 9) == '\0') {
      bVar1 = true;
      goto LAB_03918a44;
    }
  }
  else {
    (**(code **)(*param_4 + 0x58))(param_4,(long)param_4 + 0xc);
    *(undefined2 *)(param_4 + 1) = 0x100;
  }
  (**(code **)(*param_4 + 0x60))
            (param_4,(long)param_4 + 0x4c,(long)param_4 + 0xc,*(undefined4 *)((long)param_4 + 0x8c))
  ;
  *(undefined1 *)((long)param_4 + 9) = 0;
  bVar1 = (char)param_4[1] == '\0';
LAB_03918a44:
  local_24 = 0xffffffff;
  pfVar2 = (float *)((long)param_4 + 0xc);
  fVar3 = *pfVar2;
  fVar5 = *(float *)(param_4 + 2);
  fVar4 = *(float *)((long)param_4 + 0x14);
  fVar6 = *(float *)((long)param_4 + 0x1c);
  fVar8 = *(float *)(param_4 + 4);
  fVar7 = *(float *)((long)param_4 + 0x24);
  if (!bVar1) {
    (**(code **)(*param_4 + 0x58))(param_4,pfVar2);
    *(undefined2 *)(param_4 + 1) = 0x100;
    (**(code **)(*param_4 + 0x60))
              (param_4,(long)param_4 + 0x4c,pfVar2,*(undefined4 *)((long)param_4 + 0x8c));
    *(undefined1 *)((long)param_4 + 9) = 0;
  }
  FUN_03912de0(SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) /
               SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4),param_3,param_2,pfVar2,
               param_5 + 8,&local_24);
  return;
}

