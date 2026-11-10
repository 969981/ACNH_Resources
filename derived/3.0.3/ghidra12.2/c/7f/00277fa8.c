
bool FUN_00277fa8(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 auStack_44 [16];
  undefined4 local_34;
  
  if (param_2 != (long *)0x0) {
    param_1[0xd] = (long)param_2;
    local_54 = 0x200000000000;
    local_4c = 0;
    (**(code **)(*param_2 + 0x28))(param_2,&local_54);
    lVar3 = param_1[0xe];
    local_54 = local_54 & 0xffffffff00000000;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_54 + 4),(Result *)&local_34);
    FUN_002296c4(auStack_44,&local_54);
    FUN_00220f8c(lVar3,auStack_44);
    lVar3 = param_1[0xd];
    *(int *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(lVar3 + 0x4c) = 3;
    *(undefined1 *)(lVar3 + 0x89) = 1;
    lVar3 = DAT_04c5fbb0;
    plVar1 = (long *)FUN_00228380();
    lVar2 = *plVar1;
    lVar3 = *(long *)(lVar3 + 0x30);
    *(undefined4 *)((long)param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[0xb] = lVar3 + lVar2 * param_3;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)&LAB_002780ac;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessConnectionRequestJob::SendConnectionResponse";
  }
  return param_2 != (long *)0x0;
}

