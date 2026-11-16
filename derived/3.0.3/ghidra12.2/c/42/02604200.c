
void FUN_02604200(long param_1)

{
  char *pcVar1;
  long lVar2;
  long local_d8;
  long local_d0;
  long local_a0;
  long local_98;
  long local_68;
  long local_60;
  
  if (param_1 != 0) {
    FUN_006d8678(&local_68,"res%d",0);
    pcVar1 = (char *)(param_1 + 8);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_68 + 0x18))(&local_68);
      nn::prepo::Struct::Add(pcVar1,local_60);
    }
    FUN_006d8678(&local_a0,"rod%d",0);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      nn::prepo::Struct::Add(pcVar1,local_98);
    }
    FUN_006d8678(&local_d8,"txt%d",0);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_d8 + 0x18))(&local_d8);
      nn::prepo::Struct::Add(pcVar1,local_d0);
    }
    FUN_006d8678(&local_68,"res%d",1);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_68 + 0x18))(&local_68);
      nn::prepo::Struct::Add(pcVar1,local_60);
    }
    FUN_006d8678(&local_a0,"rod%d",1);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      nn::prepo::Struct::Add(pcVar1,local_98);
    }
    FUN_006d8678(&local_d8,"txt%d",1);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_d8 + 0x18))(&local_d8);
      nn::prepo::Struct::Add(pcVar1,local_d0);
    }
    FUN_006d8678(&local_68,"res%d",2);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_68 + 0x18))(&local_68);
      nn::prepo::Struct::Add(pcVar1,local_60);
    }
    FUN_006d8678(&local_a0,"rod%d",2);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      nn::prepo::Struct::Add(pcVar1,local_98);
    }
    FUN_006d8678(&local_d8,"txt%d",2);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_d8 + 0x18))(&local_d8);
      nn::prepo::Struct::Add(pcVar1,local_d0);
    }
    FUN_006d8678(&local_68,"res%d",3);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_68 + 0x18))(&local_68);
      nn::prepo::Struct::Add(pcVar1,local_60);
    }
    FUN_006d8678(&local_a0,"rod%d",3);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      nn::prepo::Struct::Add(pcVar1,local_98);
    }
    FUN_006d8678(&local_d8,"txt%d",3);
    lVar2 = nn::prepo::Struct::GetBuffer();
    if (lVar2 != 0) {
      (**(code **)(local_d8 + 0x18))(&local_d8);
      nn::prepo::Struct::Add(pcVar1,local_d0);
    }
  }
  return;
}

