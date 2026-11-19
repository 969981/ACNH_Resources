
void FUN_039d5074(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  undefined4 local_88 [2];
  undefined4 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  
  *(uint *)param_3[2] = *(uint *)param_3[2] & 0x33ffffff;
  local_80 = &local_70;
  pauVar3 = (undefined1 (*) [12])*param_3;
  auVar2 = pauVar3[4];
  auVar1 = *(undefined1 (*) [12])(pauVar3[1] + 4);
  pauVar4 = (undefined1 (*) [12])(pauVar3[2] + 8);
  local_70 = SUB124(*pauVar3,0);
  local_60 = SUB124(*pauVar3,4);
  uStack_68 = SUB124(*pauVar4,0);
  uStack_58 = SUB124(*pauVar4,4);
  uStack_6c = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  uStack_64 = auVar2._0_4_;
  uStack_54 = auVar2._4_4_;
  local_50 = SUB124(*pauVar3,8);
  uStack_48 = SUB124(*pauVar4,8);
  uStack_4c = SUB124(*(undefined1 (*) [12])(pauVar3[1] + 4),8);
  uStack_44 = SUB124(pauVar3[4],8);
  local_88[0] = *(undefined4 *)*param_2;
  uStack_78 = param_3[1];
  (*(code *)**(undefined8 **)(param_1 + 0xb8))((undefined8 *)(param_1 + 0xb8),local_88);
  *(undefined4 *)*pauVar3 = local_70;
  *(undefined4 *)(*pauVar3 + 4) = local_60;
  *(undefined4 *)(*pauVar3 + 8) = local_50;
  *(undefined4 *)pauVar3[1] = 0;
  *(undefined4 *)*pauVar4 = uStack_68;
  *(undefined4 *)pauVar3[3] = uStack_58;
  *(undefined4 *)(pauVar3[3] + 4) = uStack_48;
  *(undefined4 *)(pauVar3[3] + 8) = 0;
  *(ulong *)pauVar3[2] = (ulong)uStack_4c;
  *(ulong *)(pauVar3[1] + 4) = CONCAT44(uStack_5c,uStack_6c);
  *(ulong *)(pauVar3[4] + 8) = (ulong)uStack_44;
  *(ulong *)pauVar3[4] = CONCAT44(uStack_54,uStack_64);
  *(undefined4 *)(param_2 + 1) = local_88[0];
  *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 0x20;
  return;
}

