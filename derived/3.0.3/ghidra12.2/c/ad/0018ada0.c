
void FUN_0018ada0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    nn::os::SignalConditionVariable((ConditionVariableType *)*param_1);
    return;
  }
  nn::os::BroadcastConditionVariable((ConditionVariableType *)*param_1);
  return;
}

